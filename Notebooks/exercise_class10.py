import numpy as np

alturas = [167, 166, 146, 168, 181, 174, 173, 148, 150, 152, 160, 152, 150, 156, 158, 171, 177, 156, 151, 173, 151, 159,
169, 163, 164, 167, 171, 151, 156, 179, 182, 157, 166, 161, 179, 172, 159, 155, 162, 155]
alturas = np.array(alturas)
n_alturas = len(alturas)
mc_counts = 10000
means = np.zeros(mc_counts)
stds = np.zeros(mc_counts)

for i in range(mc_counts):
    indices_sr = np.random.randint(0, n_alturas, n_alturas)
    alturas_sr = alturas[indices_sr]
    means[i] = np.mean(alturas_sr)
    stds[i] = np.std(alturas_sr)

mean_mc = means.mean()
std_mc = means.std()
std_mc_real = stds.mean()

print(f"usual method {alturas.mean()}, {alturas.std()}")
print(f"mean_mc = {mean_mc}, std_mc = {std_mc}")
print(f"mean_mc = {mean_mc}, std_mc_real = {std_mc_real}")