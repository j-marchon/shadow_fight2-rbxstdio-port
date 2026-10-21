// SFButton$$RemoveEventListener @ RVA 0x34BAD08

int32_t SFButton__RemoveEventListener
                  (SFButton_o *__this,int32_t KGLJICLJHEL,System_Action_object__o *IELDNEAAPBE,
                  MethodInfo *method)

{
  int32_t iVar1;
  OMLLDCIMLBB_object__o *__this_00;
  
  if ((DAT_045685ca & 1) == 0) {
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    DAT_045685ca = 1;
  }
  __this_00 = (__this->fields).CDMKOMBJFLG;
  if (__this_00 != (OMLLDCIMLBB_object__o *)0x0) {
    iVar1 = OMLLDCIMLBB<object>__RemoveEventListener
                      (__this_00,KGLJICLJHEL,(System_Action_T__o *)IELDNEAAPBE,
                       Method_OMLLDCIMLBB<object>_RemoveEventListener__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

