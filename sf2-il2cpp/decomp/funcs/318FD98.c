// Nekki.SF2.GUI.Tutorial.TutorialCanvas$$get_Instance @ RVA 0x318FD98

Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *
Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  
  if ((DAT_04566a39 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialCanvas>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 0328fddc to 0338fde7 has its CatchHandler @ 0328fef0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo);
    FUN_01bab630(&StringLiteral_15600);
    FUN_01bab630(&StringLiteral_10417);
    DAT_04566a39 = 1;
  }
                    /* try { // try from 0328fe28 to 0338fe43 has its CatchHandler @ 0328fef4 */
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo->static_fields->KNOHKIKFEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0328fe44 to 0338fecf has its CatchHandler @ 0328fbe0 */
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10417,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fd24 with catch @ 0328ff00
                        */
      FUN_01bab8c8();
    }
    UnityEngine_Object__set_name(__this,StringLiteral_15600,(MethodInfo *)0x0);
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pNVar2 = (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        Method_UnityEngine_GameObject_GetComponent<TutorialCanvas>__);
                    /* try { // try from 0328fed0 to 0338fed3 has its CatchHandler @ 0328fef8 */
                    /* try { // try from 0328fed4 to 0338fedb has its CatchHandler @ 0328ff04 */
    Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo->static_fields->KNOHKIKFEBL = pNVar2;
                    /* try { // try from 0328fedc to 0338fedf has its CatchHandler @ 0328fbe0 */
                    /* try { // try from 0328fee0 to 0338fee3 has its CatchHandler @ 0328feec */
                    /* try { // try from 0328fee4 to 0338ff13 has its CatchHandler @ 0328fbe0 */
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo->static_fields,pNVar2);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fee0 with catch @ 0328feec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fddc with catch @ 0328fef0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fe28 with catch @ 0328fef4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fed0 with catch @ 0328fef8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fd80 with catch @ 0328fefc
                        */
  return Nekki_SF2_GUI_Tutorial_TutorialCanvas_TypeInfo->static_fields->KNOHKIKFEBL;
}

