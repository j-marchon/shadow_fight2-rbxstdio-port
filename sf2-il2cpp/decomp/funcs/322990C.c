// LPGPNBGHDBD$$CEOEIJFKMOG @ RVA 0x322990C

void LPGPNBGHDBD__CEOEIJFKMOG
               (AFFHKININGD_o *AGONJKOMAAA,System_Action_BKKPAKHJDKB__o *CPECAEHDDDB,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar3;
  ADJEBFOPFFF_o *__this_00;
  
  if ((DAT_04566f90 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    DAT_04566f90 = 1;
  }
  if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                       (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)__this,
                       Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    if (!bVar2) {
      if (__this == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03329a34:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        bVar1 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
           ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)FPLOLKHJIAF_TypeInfo)) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
          if ((pIVar3 != (Il2CppObject *)0x0) && (__this_00 != (ADJEBFOPFFF_o *)0x0)) {
            ADJEBFOPFFF__EFGGOJMGCLK(__this_00,pIVar3[6].monitor,CPECAEHDDDB,true,(MethodInfo *)0x0)
            ;
            return;
          }
          goto LAB_03329a34;
        }
      }
    }
  }
  return;
}

