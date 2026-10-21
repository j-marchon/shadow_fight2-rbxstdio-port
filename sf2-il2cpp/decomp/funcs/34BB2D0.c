// SFButton$$CallEvent @ RVA 0x34BB2D0

int32_t SFButton__CallEvent(SFButton_o *__this,int32_t KGLJICLJHEL,Il2CppObject *PLPFOJADDML,
                           MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685db & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_045685db = 1;
  }
  if ((__this->fields).super.super.m_Interactable != false) {
    __this_00 = (__this->fields).CDMKOMBJFLG;
    if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
      iVar1 = OMLLDCIMLBB<object>__CallEvent
                        (__this_00,KGLJICLJHEL,PLPFOJADDML,Method_OMLLDCIMLBB<object>_CallEvent__);
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 1;
}

