// OFGMILFFIDI$$JHEIGLGFONB @ RVA 0x35B04F8

void OFGMILFFIDI__JHEIGLGFONB
               (OFGMILFFIDI_o *__this,System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  
  if ((DAT_04568e97 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2088);
                    /* try { // try from 036b0544 to 037b0547 has its CatchHandler @ 036b075c */
    FUN_01bab630(&StringLiteral_167);
                    /* try { // try from 036b0548 to 037b054b has its CatchHandler @ 036b0758 */
    DAT_04568e97 = 1;
  }
                    /* try { // try from 036b0550 to 037b0573 has its CatchHandler @ 036b0600 */
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NONPLOOOOAG,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_167;
  if (bVar1) {
    str2 = string_TypeInfo->static_fields->Empty;
  }
  else {
                    /* try { // try from 036b0580 to 037b0587 has its CatchHandler @ 036b05ec */
                    /* try { // try from 036b058c to 037b05ab has its CatchHandler @ 036b05f8 */
    str2 = System_String__Concat(StringLiteral_2088,NONPLOOOOAG,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat(JJBPCFGELPO,pSVar2,str2,(MethodInfo *)0x0);
                    /* try { // try from 036b05b0 to 037b05e7 has its CatchHandler @ 036b05e8 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
  return;
}

