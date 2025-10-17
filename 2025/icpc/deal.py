import sys

MOD = 1_000_000_007
INV2 = (MOD + 1) // 2  # 500000004

def main():
    rl = sys.stdin.buffer.readline
    n = int(rl())

    num_prod = 1  # Π (p_i - q_i) mod MOD
    den_prod = 1  # Π (p_i + q_i) mod MOD

    for _ in range(n):
        p, q = map(int, rl().split())
        num_prod = (num_prod * ((p - q) % MOD)) % MOD
        den_prod = (den_prod * (p + q)) % MOD  # <= 2e6 < MOD ⇒ invertible

    # prod = Π (p_i - q_i)/(p_i + q_i) mod MOD
    prod = num_prod * pow(den_prod, MOD - 2, MOD) % MOD

    # answer = (1 + prod) / 2 mod MOD
    ans = (1 + prod) * INV2 % MOD
    print(ans)

if __name__ == "__main__":
    main()
