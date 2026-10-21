// JBEHJGDKPHL$$BMCHKGBBNBK @ RVA 0x32533C8

bool JBEHJGDKPHL__BMCHKGBBNBK(JBEHJGDKPHL_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Font_o *pUVar2;
  
                    /* try { // try from 033533d4 to 034533d7 has its CatchHandler @ 033535c4 */
                    /* try { // try from 033533d8 to 034533e7 has its CatchHandler @ 033535e8 */
  if ((DAT_04567144 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 033533f8 to 034533ff has its CatchHandler @ 033535e0 */
    DAT_04567144 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).LGJBPLPKHPN;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03353410 to 03453417 has its CatchHandler @ 033535d0 */
                    /* try { // try from 0335341c to 03453423 has its CatchHandler @ 033535e4 */
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = (__this->fields).AKHNPENIJKJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03353434 to 0345343b has its CatchHandler @ 033535dc */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0335343c to 0345344f has its CatchHandler @ 033535c8 */
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pUVar2 = (__this->fields).JMKKDKBAMMD;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 03353454 to 0345345f has its CatchHandler @ 033535cc */
  return true;
}

