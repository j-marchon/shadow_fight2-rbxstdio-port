// Nekki.SF2.GUI.Common.HintCanvas$$get_Instance @ RVA 0x32339F4

CLMJPODNPKB_o * Nekki_SF2_GUI_Common_HintCanvas__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Common_HintCanvas_o *pNVar2;
  
                    /* try { // try from 033339fc to 03433a9f has its CatchHandler @ 0333385c */
  if ((DAT_04566ffa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintCanvas>__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_HintCanvas_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10396);
    FUN_01bab630(&StringLiteral_15482);
    DAT_04566ffa = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03333aa0 to 03433aa7 has its CatchHandler @ 03333adc */
  if (bVar1) {
                    /* try { // try from 03333aa8 to 03433aab has its CatchHandler @ 03333ac8 */
                    /* try { // try from 03333aac to 03433aaf has its CatchHandler @ 03333ac4 */
                    /* try { // try from 03333ab0 to 03433ab3 has its CatchHandler @ 0333385c */
                    /* try { // try from 03333ab4 to 03433ab7 has its CatchHandler @ 03333ac0 */
                    /* try { // try from 03333ab8 to 03433af3 has its CatchHandler @ 0333385c */
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10396,Method_UnityEngine_Resources_Load<GameObject>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333ab4 with catch @ 03333ac0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aac with catch @ 03333ac4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aa8 with catch @ 03333ac8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033339e4 with catch @ 03333acc
                        */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033339f0 with catch @ 03333ad0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333980 with catch @ 03333ad4
                        */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333924 with catch @ 03333ad8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333aa0 with catch @ 03333adc
                        */
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03333af4 to 03433af7 has its CatchHandler @ 03333b04 */
                    /* catch() { ... } // from try @ 03333af4 with catch @ 03333b04 */
    UnityEngine_Object__set_name(__this,StringLiteral_15482,(MethodInfo *)0x0);
                    /* try { // try from 03333b0c to 03433b73 has its CatchHandler @ 03333b88 */
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Common_HintCanvas_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<HintCanvas>__);
    Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields,pNVar2);
  }
  return (CLMJPODNPKB_o *)Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
}

