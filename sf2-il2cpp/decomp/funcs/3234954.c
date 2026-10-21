// GCOLFANNEMF$$HJKJNLIKHMM @ RVA 0x3234954

void GCOLFANNEMF__HJKJNLIKHMM(GCOLFANNEMF_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BECIPDJBAOG__o *pSVar4;
  
                    /* try { // try from 03334954 to 034349f7 has its CatchHandler @ 03334788 */
  if ((DAT_04567012 & 1) == 0) {
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<IKGPGAPFKNE>__);
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<MCLOEMMHNIA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_get_Count__);
    DAT_04567012 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).FCKCGNHILFE;
  if (pSVar4 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
    iVar2 = (pSVar4->fields)._size;
    iVar3 = (__this->fields).ANILPHJPHND;
    puVar1 = (undefined8 *)&Method_KFHIPIPCOHK_KJKDAHGENPM<IKGPGAPFKNE>__;
    if (iVar3 <= iVar2) {
      puVar1 = &Method_KFHIPIPCOHK_KJKDAHGENPM<MCLOEMMHNIA>__;
    }
    GCOLFANNEMF__KDKHMJLKOCP(iVar2 < iVar3,method);
    KFHIPIPCOHK__KJKDAHGENPM<object>((KFHIPIPCOHK_o *)__this,(MethodInfo_1EE18C8 *)*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

