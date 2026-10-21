// Nekki.SF2.GUI.Fight.EndFightContent$$CreateLine @ RVA 0x309C07C

MCNGELCOMNG_o *
Nekki_SF2_GUI_Fight_EndFightContent__CreateLine
          (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,System_String_o *EHNFGMGKCHO,
          int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,System_String_o *LAPCDGMAIAI,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Func_long__string__o *CDBMJENDHFM;
  UnityEngine_GameObject_o *pUVar1;
  
  if ((DAT_0456611a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_LHINFPOHDPH__);
    FUN_01bab630(&System_Func<long,_string>_TypeInfo);
                    /* try { // try from 0319c0d0 to 0329c0d3 has its CatchHandler @ 0319c3a0 */
                    /* try { // try from 0319c0d4 to 0329c0df has its CatchHandler @ 0319c3d0 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TextAndMoneyLine>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 0319c0f0 to 0329c0f3 has its CatchHandler @ 0319c398 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0319c0f4 to 0329c10b has its CatchHandler @ 0319c3e0 */
    DAT_0456611a = 1;
  }
  pUVar1 = (__this->fields)._textAndMoneyLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar1 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar1,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 0319c128 to 0329c13f has its CatchHandler @ 0319c39c */
                    /* try { // try from 0319c148 to 0329c14f has its CatchHandler @ 0319c41c */
  if (((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar1,Method_UnityEngine_GameObject_GetComponent<TextAndMoneyLine>__)
      , __this_00 != (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *)0x0)) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
                    /* try { // try from 0319c158 to 0329c1cb has its CatchHandler @ 0319c3d8 */
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      CDBMJENDHFM = (System_Func_long__string__o *)
                    thunk_FUN_01bda818(System_Func<long,_string>_TypeInfo);
      System_Func<long,_object>___ctor();
      Nekki_SF2_GUI_Fight_TextAndMoneyLine__Init
                (__this_00,EHNFGMGKCHO,DCDLMCEEOCC,IPGOFHMGFOI,CDBMJENDHFM,LAPCDGMAIAI,
                 (MethodInfo *)0x0);
                    /* try { // try from 0319c1e8 to 0329c1eb has its CatchHandler @ 0319c3c4 */
                    /* try { // try from 0319c1ec to 0329c1f7 has its CatchHandler @ 0319c3fc */
      return (MCNGELCOMNG_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

