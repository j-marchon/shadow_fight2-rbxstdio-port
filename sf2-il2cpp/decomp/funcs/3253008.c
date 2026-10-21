// LPGLKMNHELJ$$.ctor @ RVA 0x3253008

void LPGLKMNHELJ___ctor(LPGLKMNHELJ_o *__this,System_String_o *BCFJHEPFBOB,bool LLCJCPCKPJL,
                       bool LLFFIPAKOML,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ENBCJNLAHAC_o *NPOAPJKIIOF;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)LLCJCPCKPJL;
  method_00 = (MethodInfo *)BCFJHEPFBOB;
  if ((DAT_0456713e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10796);
    DAT_0456713e = 1;
    method_00 = extraout_x1;
  }
  LPGLKMNHELJ___ctor(__this,method_00);
  (__this->fields).IHJFCJKCGEK = LLFFIPAKOML;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
    NPOAPJKIIOF = JMDPBFOCHHP__DIFLKMKBENA(__this_00,BCFJHEPFBOB,LLCJCPCKPJL,(MethodInfo *)0x0);
    if (NPOAPJKIIOF != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      LPGLKMNHELJ__BAKANMGEDIG(__this,NPOAPJKIIOF,method_01);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((BCFJHEPFBOB != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(BCFJHEPFBOB,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) {
        uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar2,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)BCFJHEPFBOB;
        thunk_FUN_01c20e04(args->m_Items,BCFJHEPFBOB);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10796,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

