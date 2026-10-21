// TypeDefIndex 2894
// Namespace: Nekki.SF2.GUI.Dialogs
// public class DownloadingScreen : SFMonoBehaviour<object>
// Fields:
//   private LabelAlias _text; // 0x28
//   private ProgressBar _progressBar; // 0x30
//   private IEnumerator DPFLHBIBGFB; // 0x38
//   private static DownloadingScreen CBDMFFMCJBK; // 0x0

// ===== public static DownloadingScreen get_Instance()  [RVA 0x3441A0C]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_Instance @ RVA 0x3441A0C

Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *pNVar3;
  
  if ((DAT_04568223 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DownloadingScreen>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15459/*"[DownloadingScreen]"*/);
    FUN_01bab630(&StringLiteral_10401/*"Prefabs/Dialogs/DownloadingScreen"*/);
    DAT_04568223 = 1;
  }
  pNVar3 = Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Resources__Load(StringLiteral_10401/*"Prefabs/Dialogs/DownloadingScreen"*/,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    pUVar2 = UnityEngine_Object__Instantiate(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pUVar2->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar2);
    }
    UnityEngine_Object__set_name(pUVar2,StringLiteral_15459/*"[DownloadingScreen]"*/,(MethodInfo *)0x0);
    pNVar3 = (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar2,
                        Method_UnityEngine_GameObject_GetComponent<DownloadingScreen>__);
    Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK = pNVar3;
                    /* try { // try from 03541b44 to 03641b4b has its CatchHandler @ 03541c04 */
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields,pNVar3);
                    /* try { // try from 03541b54 to 03641b5f has its CatchHandler @ 03541c00 */
    UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
  }
                    /* try { // try from 03541b60 to 03641bdf has its CatchHandler @ 03541a04 */
  return Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public string get_TitleAlias()  [RVA 0x3441B80]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_TitleAlias @ RVA 0x3441B80

System_String_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_TitleAlias
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568224 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568224 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
                    /* try { // try from 03541be0 to 03641be7 has its CatchHandler @ 03541d10 */
  if (bVar1) {
    pNVar3 = (__this->fields)._text;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03541bfc to 03641c1b has its CatchHandler @ 03541a04 */
      FUN_01bab8c8();
    }
    pSVar2 = *(System_String_o **)&(pNVar3->fields)._useLabelLineSpacing;
  }
                    /* try { // try from 03541bf0 to 03641bfb has its CatchHandler @ 03541d0c */
  return pSVar2;
}


// ===== public static bool Exists()  [RVA 0x3441C00]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$Exists @ RVA 0x3441C00

bool Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *x;
  
                    /* catch() { ... } // from try @ 03541b54 with catch @ 03541c00 */
                    /* catch() { ... } // from try @ 03541b44 with catch @ 03541c04 */
                    /* try { // try from 03541c1c to 03641c1f has its CatchHandler @ 03541ce8 */
                    /* try { // try from 03541c20 to 03641cf7 has its CatchHandler @ 03541a04 */
  if ((DAT_04568225 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568225 = 1;
  }
  x = Nekki_SF2_GUI_Dialogs_DownloadingScreen_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public float get_Progress()  [RVA 0x3441C78]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_Progress @ RVA 0x3441C78

float Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_Progress
                (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ProgressBar_o *pPVar2;
  float fVar3;
  
  if ((DAT_04568226 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568226 = 1;
    method = extraout_x1;
  }
  pPVar2 = (__this->fields)._progressBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar2 = (__this->fields)._progressBar;
    if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 03541c1c with catch @ 03541ce8 */
                    /* WARNING: Could not recover jumptable at 0x03541cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(*(pPVar2->klass->vtable)._5_get_Value.methodPtr)
                               (pPVar2,(pPVar2->klass->vtable)._5_get_Value.method);
      return fVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03541cf8 to 03641d0b has its CatchHandler @ 03541ea4 */
  return 0.0;
}


// ===== public void .ctor()  [RVA 0x3441D04]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$.ctor @ RVA 0x3441D04

void Nekki_SF2_GUI_Dialogs_DownloadingScreen___ctor
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03541bf0 with catch @ 03541d0c
                       try { // try from 03541d0c to 03641d27 has its CatchHandler @ 03541a04 */
                    /* catch() { ... } // from try @ 03541be0 with catch @ 03541d10 */
  if ((DAT_04568227 & 1) == 0) {
                    /* try { // try from 03541d28 to 03641d2b has its CatchHandler @ 03541e0c */
                    /* try { // try from 03541d2c to 03641daf has its CatchHandler @ 03541a04 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    DAT_04568227 = 1;
  }
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}


// ===== public void set_ProgressBarActive(bool CJNHFNHJHPE)  [RVA 0x3441D4C]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_ProgressBarActive @ RVA 0x3441D4C

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_ProgressBarActive
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  ProgressBar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._progressBar;
  if ((__this_00 != (ProgressBar_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_TitleText(string CJNHFNHJHPE)  [RVA 0x3441D7C]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_TitleText @ RVA 0x3441D7C

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleText
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568228 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03541db0 to 03641db7 has its CatchHandler @ 03541e34 */
    DAT_04568228 = 1;
  }
  pNVar2 = (__this->fields)._text;
                    /* try { // try from 03541dc0 to 03641dcb has its CatchHandler @ 03541e30 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03541dcc to 03641e1b has its CatchHandler @ 03541a04 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03541e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03541d28 with catch @ 03541e0c */
  return;
}


// ===== public bool get_ProgressBarActive()  [RVA 0x3441E1C]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_ProgressBarActive @ RVA 0x3441E1C

bool Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_ProgressBarActive
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  ProgressBar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 03541e1c to 03641e2f has its CatchHandler @ 03541ea4 */
  __this_00 = (__this->fields)._progressBar;
                    /* catch() { ... } // from try @ 03541dc0 with catch @ 03541e30
                       try { // try from 03541e30 to 03641e4b has its CatchHandler @ 03541a04 */
  if ((__this_00 != (ProgressBar_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 03541db0 with catch @ 03541e34 */
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DestroyAfterSeconds(float LFJGFLNMBMC, Action CPECAEHDDDB)  [RVA 0x3441E44]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$DestroyAfterSeconds @ RVA 0x3441E44

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__DestroyAfterSeconds
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float LFJGFLNMBMC,
               System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *extraout_x0;
  Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this_00;
  System_Collections_IEnumerator_o *pSVar1;
  System_Collections_IEnumerator_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).DPFLHBIBGFB;
                    /* try { // try from 03541e4c to 03641e4f has its CatchHandler @ 03541e78 */
                    /* try { // try from 03541e50 to 03641e87 has its CatchHandler @ 03541a04 */
  pSVar1 = *ppSVar2;
  __this_00 = __this;
  if (pSVar1 != (System_Collections_IEnumerator_o *)0x0) {
    method = (MethodInfo *)0x0;
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pSVar1,(MethodInfo *)0x0);
    __this_00 = extraout_x0;
  }
                    /* catch() { ... } // from try @ 03541e4c with catch @ 03541e78 */
  pSVar1 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__BBCNAEPHINN
                     (__this_00,LFJGFLNMBMC,CPECAEHDDDB,method);
  (__this->fields).DPFLHBIBGFB = pSVar1;
                    /* try { // try from 03541e88 to 03641e8f has its CatchHandler @ 03541ea4 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03541e90 to 03641e9b has its CatchHandler @ 03541a04 */
                    /* try { // try from 03541e9c to 03641ea3 has its CatchHandler @ 03541ea4 */
                    /* catch() { ... } // from try @ 03541cf8 with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e1c with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e88 with catch @ 03541ea4
                       catch() { ... } // from try @ 03541e9c with catch @ 03541ea4 */
                    /* try { // try from 03541ea8 to 03641fe7 has its CatchHandler @ 03541ea8
                       catch() { ... } // from try @ 03541ea8 with catch @ 03541ea8
                       catch() { ... } // from try @ 03542004 with catch @ 03541ea8
                       catch() { ... } // from try @ 035420e8 with catch @ 03541ea8
                       catch() { ... } // from try @ 03542124 with catch @ 03541ea8
                       catch() { ... } // from try @ 0354222c with catch @ 03541ea8
                       catch() { ... } // from try @ 0354224c with catch @ 03541ea8
                       catch() { ... } // from try @ 0354228c with catch @ 03541ea8 */
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields).DPFLHBIBGFB,(MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator BBCNAEPHINN(float LFJGFLNMBMC, Action CPECAEHDDDB)  [RVA 0x3441EAC]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$BBCNAEPHINN @ RVA 0x3441EAC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__BBCNAEPHINN
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float LFJGFLNMBMC,
          System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04568229 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_TypeInfo);
    DAT_04568229 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  *(float *)&__this_00[2].klass = LFJGFLNMBMC;
  __this_00[2].monitor = CPECAEHDDDB;
  thunk_FUN_01c20e04(&__this_00[2].monitor,CPECAEHDDDB);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void set_Progress(float CJNHFNHJHPE)  [RVA 0x3441F50]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_Progress @ RVA 0x3441F50

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_Progress
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ProgressBar_o *pPVar2;
  undefined4 in_register_00005004;
  
  if ((DAT_0456822a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822a = 1;
    method = extraout_x1;
  }
  pPVar2 = (__this->fields)._progressBar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar2 = (__this->fields)._progressBar;
    if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03541fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pPVar2->klass->vtable)._7_set_Value.methodPtr)
                (CONCAT44(in_register_00005004,CJNHFNHJHPE),pPVar2,
                 (pPVar2->klass->vtable)._7_set_Value.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03541fe8 to 03641fef has its CatchHandler @ 03542108 */
    FUN_01bab8c8();
  }
  return;
}


// ===== public static void Destroy()  [RVA 0x3441FEC]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$Destroy @ RVA 0x3441FEC

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy(MethodInfo *method)

{
                    /* try { // try from 03541ff8 to 03642003 has its CatchHandler @ 03542104 */
                    /* try { // try from 03542004 to 036420cb has its CatchHandler @ 03541ea8 */
  FUN_03f93a48(DAT_0456822b);
  return;
}


// ===== public string get_TitleText()  [RVA 0x34420D0]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$get_TitleText @ RVA 0x34420D0

System_String_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__get_TitleText
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
                    /* try { // try from 035420dc to 036420e7 has its CatchHandler @ 0354222c */
                    /* try { // try from 035420e8 to 0364211f has its CatchHandler @ 03541ea8 */
  if ((DAT_0456822c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822c = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03541ff8 with catch @ 03542104
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03541fe8 with catch @ 03542108
                        */
  pNVar3 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03542120 to 03642123 has its CatchHandler @ 03542208 */
                    /* try { // try from 03542124 to 03642217 has its CatchHandler @ 03541ea8 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._text;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03542148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(pNVar3->klass->vtable)._74_get_text.methodPtr)
                         (pNVar3,(pNVar3->klass->vtable)._74_get_text.method);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (System_String_o *)0x0;
}


// ===== public void set_TitleAlias(string CJNHFNHJHPE)  [RVA 0x3442160]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$set_TitleAlias @ RVA 0x3442160

void Nekki_SF2_GUI_Dialogs_DownloadingScreen__set_TitleAlias
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456822d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456822d = 1;
  }
  pNVar2 = (__this->fields)._text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

