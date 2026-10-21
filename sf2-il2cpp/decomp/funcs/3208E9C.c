// NLPJLHOEAOE.EANNNIEHPHH$$LPJNHOACLDJ @ RVA 0x3208E9C

int32_t NLPJLHOEAOE_EANNNIEHPHH__LPJNHOACLDJ(NLPJLHOEAOE_EANNNIEHPHH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566e60 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    DAT_04566e60 = 1;
  }
  pSVar1 = (__this->fields).HHGNEMKLKHG;
  if (pSVar1 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

