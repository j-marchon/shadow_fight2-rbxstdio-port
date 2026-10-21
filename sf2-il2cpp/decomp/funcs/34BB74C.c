// SFButton$$RemoveEvent @ RVA 0x34BB74C

int32_t SFButton__RemoveEvent(SFButton_o *__this,int32_t KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685d5 & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEvent__);
    DAT_045685d5 = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__RemoveEvent
                      (__this_00,KGLJICLJHEL,Method_OMLLDCIMLBB<object>_RemoveEvent__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

