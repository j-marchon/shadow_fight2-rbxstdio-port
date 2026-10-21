// Nekki.SF2.GUI.Common.Hints.HintCache$$Init @ RVA 0x32B869C

void Nekki_SF2_GUI_Common_Hints_HintCache__Init(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *pNVar2;
  
  if ((DAT_0456746c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintCache>__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
                    /* try { // try from 033b8704 to 034b87b7 has its CatchHandler @ 033b8704
                       catch() { ... } // from try @ 033b8704 with catch @ 033b8704
                       catch() { ... } // from try @ 033b87d4 with catch @ 033b8704
                       catch() { ... } // from try @ 033b880c with catch @ 033b8704
                       catch() { ... } // from try @ 033b8834 with catch @ 033b8704
                       catch() { ... } // from try @ 033b8874 with catch @ 033b8704 */
    FUN_01bab630(&StringLiteral_15481);
    FUN_01bab630(&StringLiteral_10405);
    DAT_0456746c = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10405,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this,StringLiteral_15481,(MethodInfo *)0x0);
                    /* try { // try from 033b87b8 to 034b87bf has its CatchHandler @ 033b8818 */
      UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
                    /* try { // try from 033b87cc to 034b87d3 has its CatchHandler @ 033b8814 */
      pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintCache_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this,
                          Method_UnityEngine_GameObject_GetComponent<HintCache>__);
                    /* try { // try from 033b87d4 to 034b8807 has its CatchHandler @ 033b8704 */
      Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields,pNVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

