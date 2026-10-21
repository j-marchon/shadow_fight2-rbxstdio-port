// PCEDNFLCPPF$$.ctor @ RVA 0x33295BC

/* WARNING: Removing unreachable block (ram,0x03429748) */
/* WARNING: Removing unreachable block (ram,0x03429794) */
/* WARNING: Removing unreachable block (ram,0x034297a8) */

void PCEDNFLCPPF___ctor(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSON_JSONObject_o *pSVar3;
  SimpleJSON_JSONNode_o **ppSVar4;
  System_Action_bool__o *CJNHFNHJHPE;
  SimpleJSON_JSONNode_o *a;
  
  if ((DAT_045678af & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_PCEDNFLCPPF_JJGMEABKHLE__);
    DAT_045678af = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0342963c to 03529643 has its CatchHandler @ 03429710 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
  bVar1 = System_IO_Directory__Exists(pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 03429654 to 0352965b has its CatchHandler @ 0342970c */
  if (!bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MGENAMAJALB__CAACPGEHHFC((MethodInfo *)0x0);
    bVar1 = NEHNBJKKABI__GLNBJGJPBFD(pSVar2,(MethodInfo *)0x0);
  }
  pSVar2 = PCEDNFLCPPF__MDPANMJGEEI((MethodInfo *)(ulong)bVar1);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = PCEDNFLCPPF__MDPANMJGEEI((MethodInfo *)(ulong)bVar1);
    pSVar2 = NEHNBJKKABI__EPMKDIAJEOI(pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 0342969c to 035296bf has its CatchHandler @ 03429700 */
    pSVar3 = (SimpleJSON_JSONObject_o *)SimpleJSON_JSON__Parse(pSVar2,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
                    /* try { // try from 034296c0 to 035296ef has its CatchHandler @ 034294f8 */
    SimpleJSON_JSONObject___ctor(pSVar3,(MethodInfo *)0x0);
  }
  if (__this != (PCEDNFLCPPF_o *)0x0) {
    ppSVar4 = &(__this->fields).HHCKEAILEEN;
    *ppSVar4 = (SimpleJSON_JSONNode_o *)pSVar3;
    thunk_FUN_01c20e04(ppSVar4,pSVar3);
    ppSVar4 = &(__this->fields).HHCKEAILEEN;
    a = *ppSVar4;
                    /* try { // try from 034296f0 to 035296f3 has its CatchHandler @ 03429704 */
                    /* try { // try from 034296f4 to 035296fb has its CatchHandler @ 03429708 */
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034296fc to 03529727 has its CatchHandler @ 034294f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342969c with catch @ 03429700
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034296f0 with catch @ 03429704
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034296f4 with catch @ 03429708
                        */
    bVar1 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03429654 with catch @ 0342970c
                        */
    if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342963c with catch @ 03429710
                        */
      pSVar3 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
                    /* try { // try from 03429728 to 0352972b has its CatchHandler @ 03429754 */
      SimpleJSON_JSONObject___ctor(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0342972c to 03529763 has its CatchHandler @ 034294f8 */
      *ppSVar4 = (SimpleJSON_JSONNode_o *)pSVar3;
      thunk_FUN_01c20e04(ppSVar4,pSVar3);
    }
                    /* catch() { ... } // from try @ 03429728 with catch @ 03429754 */
    CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 03429764 to 0352976b has its CatchHandler @ 03429780 */
                    /* try { // try from 0342976c to 03529777 has its CatchHandler @ 034294f8 */
    System_Action<bool>___ctor();
                    /* try { // try from 03429778 to 0352977f has its CatchHandler @ 03429780 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03429764 with catch @ 03429780
                       catch(type#2 @ 00000000) { ... } // from try @ 03429778 with catch @ 03429780
                        */
    Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

