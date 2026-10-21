// PJKHAJKEHEL$$FNHJLFOFAHK @ RVA 0x303E7B4

bool PJKHAJKEHEL__FNHJLFOFAHK(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CILAFHOFEGC__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04565da1 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<CILAFHOFEGC>_get_Count__);
    DAT_04565da1 = 1;
  }
  pSVar1 = (__this->fields).ADGOLGDBIEJ;
  if (pSVar1 != (System_Collections_Generic_List_CILAFHOFEGC__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

