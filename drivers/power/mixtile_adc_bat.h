#ifndef _MIXTILE_ADC_BAT_H_
#define _MIXTILE_ADC_BAT_H_

#define FAKE_BAT_LEVEL        100     //ģ���ص���
#define BAT_ADC_CHANNEL       0       //���ADCͨ��
#define EXT_ADC_CHANNEL       1       //��ӵ�ADCͨ��
#define POLL_MSTIME           (HZ+HZ) //��ѯ����

#define R_UP                  33      //��������
#define R_DOWN                20      //��������

#define MAX_VAL               3300    //�ɲ�������ѹֵ
#define ADC_MIN_VALUE         2500    //adc�������ڴ�ֵ�����
#define ADC_JITTER_VAL        30      //adc����������ڴ�ֵ�����

#define BAT_74_3650                   //7.4V 3650mAh ���

#ifdef BAT_74_3650
int bat_adc_val[100][3] = {
  {100, 3792, 3850},
  { 99, 3784, 3845},
  { 98, 3775, 3840},
  { 97, 3768, 3831},
  { 96, 3761, 3823},
  { 95, 3754, 3819},
  { 94, 3748, 3815},
  { 93, 3743, 3810},
  { 92, 3734, 3802},
  { 91, 3727, 3797},
  { 90, 3719, 3792},
  { 89, 3710, 3784},
  { 88, 3704, 3780},
  { 87, 3696, 3770},
  { 86, 3687, 3766},
  { 85, 3682, 3758},
  { 84, 3675, 3754},
  { 83, 3670, 3750},
  { 82, 3665, 3745},
  { 81, 3657, 3740},
  { 80, 3653, 3736},
  { 79, 3646, 3732},
  { 78, 3641, 3729},
  { 77, 3633, 3721},
  { 76, 3628, 3718},
  { 75, 3623, 3712},
  { 74, 3617, 3709},
  { 73, 3609, 3701},
  { 72, 3604, 3697},
  { 71, 3600, 3693},
  { 70, 3592, 3686},
  { 69, 3587, 3681},
  { 68, 3581, 3676},
  { 67, 3575, 3672},
  { 66, 3568, 3664},
  { 65, 3562, 3660},
  { 64, 3557, 3656},
  { 63, 3552, 3651},
  { 62, 3546, 3646},
  { 61, 3541, 3641},
  { 60, 3535, 3633},
  { 59, 3531, 3629},
  { 58, 3528, 3627},
  { 57, 3523, 3625},
  { 56, 3518, 3622},
  { 55, 3515, 3617},
  { 54, 3512, 3614},
  { 53, 3509, 3611},
  { 52, 3505, 3606},
  { 51, 3502, 3603},
  { 50, 3497, 3599},
  { 49, 3494, 3597},
  { 48, 3491, 3595},
  { 47, 3488, 3591},
  { 46, 3486, 3589},
  { 45, 3483, 3587},
  { 44, 3482, 3585},
  { 43, 3478, 3582},
  { 42, 3476, 3581},
  { 41, 3474, 3577},
  { 40, 3470, 3575},
  { 39, 3469, 3573},
  { 38, 3467, 3571},
  { 37, 3464, 3567},
  { 36, 3462, 3565},
  { 35, 3460, 3563},
  { 34, 3458, 3561},
  { 33, 3455, 3560},
  { 32, 3454, 3558},
  { 31, 3450, 3551},
  { 30, 3447, 3549},
  { 29, 3445, 3548},
  { 28, 3442, 3547},
  { 27, 3438, 3545},
  { 26, 3434, 3542},
  { 25, 3432, 3540},
  { 24, 3429, 3536},
  { 23, 3426, 3531},
  { 22, 3421, 3529},
  { 21, 3418, 3524},
  { 20, 3415, 3521},
  { 19, 3412, 3519},
  { 18, 3406, 3513},
  { 17, 3402, 3511},
  { 16, 3397, 3506},
  { 15, 3393, 3501},
  { 14, 3388, 3496},
  { 13, 3382, 3486},
  { 12, 3376, 3483},
  { 11, 3372, 3480},
  { 10, 3370, 3477},
  {  9, 3367, 3473},
  {  8, 3364, 3465},
  {  7, 3357, 3460},
  {  6, 3346, 3453},
  {  5, 3321, 3432},
  {  4, 3287, 3399},
  {  3, 3235, 3349},
  {  2, 3162, 3281},
  {  1, 3100, 3110}
};
#endif /* BAT_74_3650 */

#endif /* _MIXTILE_ADC_BAT_H_ */