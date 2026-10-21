// FCJBEKHDLAF$$AGEFBLEDMBG @ RVA 0x33E7718

void FCJBEKHDLAF__AGEFBLEDMBG(FCJBEKHDLAF_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  OLKKAIFGGAK_o **ppOVar4;
  int32_t local_24;
  
                    /* try { // try from 034e7720 to 035e774f has its CatchHandler @ 034e7668 */
  if ((DAT_04567ed6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
                    /* try { // try from 034e7750 to 035e7753 has its CatchHandler @ 034e775c */
                    /* try { // try from 034e7754 to 035e7777 has its CatchHandler @ 034e7668 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e7710 with catch @ 034e7758
                        */
    FUN_01bab630(&object___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e7750 with catch @ 034e775c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e76fc with catch @ 034e7760
                        */
    FUN_01bab630(&StringLiteral_6326);
    DAT_04567ed6 = 1;
  }
  if (KFLAAIMLKOE == 2) {
    ppOVar4 = &(__this->fields).CLEKIBBCAOJ;
  }
  else {
                    /* try { // try from 034e7778 to 035e777b has its CatchHandler @ 034e779c */
                    /* try { // try from 034e777c to 035e77a3 has its CatchHandler @ 034e7668 */
    if (KFLAAIMLKOE != 1) {
                    /* try { // try from 034e77ac to 035e77b7 has its CatchHandler @ 034e7668 */
                    /* try { // try from 034e77b8 to 035e77bf has its CatchHandler @ 034e77c0 */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e77a4 with catch @ 034e77c0
                       catch(type#2 @ 00000000) { ... } // from try @ 034e77b8 with catch @ 034e77c0
                        */
      local_24 = KFLAAIMLKOE;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
        uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar3,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items,pIVar1);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_6326,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ppOVar4 = &(__this->fields).LAMENNMGPBN;
  }
  if (*ppOVar4 == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 034e7778 with catch @ 034e779c */
                    /* try { // try from 034e77a4 to 035e77ab has its CatchHandler @ 034e77c0 */
  OLKKAIFGGAK__MCEMJDBACFG(*ppOVar4,0.0,(MethodInfo *)0x0);
  return;
}

