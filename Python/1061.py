start_day = input().split()
start_time = input().split() 
final_day = input().split()
final_time = input().split()

id, fd = int(start_day[1]), int(final_day[1])

ih, im, is_ = int(start_time[0]), int(start_time[2]), int(start_time[4])
fh, fm, fs_ = int(final_time[0]), int(final_time[2]), int(final_time[4])

SECUNDS_IN_MINUTE = 60 ; SECUNDS_IN_HOUR = 3600; SECUNDS_IN_DAY = 86400

start_total_seconds = (id * SECUNDS_IN_DAY) + (ih * SECUNDS_IN_HOUR) + (im * SECUNDS_IN_MINUTE) + is_
final_total_seconds = (fd * SECUNDS_IN_DAY) + (fh * SECUNDS_IN_HOUR) + (fm * SECUNDS_IN_MINUTE) + fs_


total_seconds = final_total_seconds - start_total_seconds

days = total_seconds // SECUNDS_IN_DAY
total_seconds %= SECUNDS_IN_DAY

hours = total_seconds // SECUNDS_IN_HOUR
total_seconds %= SECUNDS_IN_HOUR

minutes = total_seconds // SECUNDS_IN_MINUTE
seconds = total_seconds % SECUNDS_IN_MINUTE

print(f"{days} dia(s)")
print(f"{hours} hora(s)")
print(f"{minutes} minuto(s)")
print(f"{seconds} segundo(s)")