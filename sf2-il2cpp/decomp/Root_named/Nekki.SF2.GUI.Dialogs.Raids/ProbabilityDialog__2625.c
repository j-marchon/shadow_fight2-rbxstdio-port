// TypeDefIndex 2625
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ProbabilityDialog : SimpleDialog
// Fields:
//   private ProbabilityContent _probabilityContent; // 0x110
//   private CloseButton _closeButton; // 0x118
//   public HOOAAGABMBL itemToBuy; // 0x120
//   private ProbabilityContent GIDBPFIPMGO; // 0x128
//   private FKLIOKJBFCI PAAIEEFEBKK; // 0x130
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0x138

// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x33B1710]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$Init @ RVA 0x33B1710

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  FKLIOKJBFCI_c *pFVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Action_object__o *pSVar5;
  System_IObservable_object__o *source;
  Il2CppObject *disposable;
  CloseButton_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_T__o *pSVar6;
  MethodInfo *in_x5;
  FKLIOKJBFCI_o *pFVar7;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *pNVar8;
  FKLIOKJBFCI_o **ppFVar9;
  RaidConfig_ENBCJNLAHAC_o *pJVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_Vector2_o UVar12;
  
                    /* try { // try from 034b1714 to 035b171b has its CatchHandler @ 034b1a4c */
                    /* try { // try from 034b1724 to 035b172b has its CatchHandler @ 034b1a28 */
                    /* try { // try from 034b172c to 035b1737 has its CatchHandler @ 034b1a44 */
  if ((DAT_04567d4f & 1) == 0) {
                    /* try { // try from 034b1744 to 035b1757 has its CatchHandler @ 034b1a48 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&FKLIOKJBFCI_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ProbabilityContent>__);
                    /* try { // try from 034b1770 to 035b1783 has its CatchHandler @ 034b1a24 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_KMJPPCLIEDG__);
                    /* try { // try from 034b1798 to 035b17c7 has its CatchHandler @ 034b1a6c */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d4f = 1;
  }
  pFVar2 = FKLIOKJBFCI_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).PAAIEEFEBKK = (FKLIOKJBFCI_o *)0x0;
  }
  else {
    bVar1 = (FKLIOKJBFCI_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)FKLIOKJBFCI_TypeInfo)) {
LAB_034b1b4c:
                    /* catch() { ... } // from try @ 034b07a4 with catch @ 034b1b4c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034b077c with catch @ 034b1b50 */
      FUN_01babc64(IMMNELPBGIF);
    }
    (__this->fields).PAAIEEFEBKK = (FKLIOKJBFCI_o *)IMMNELPBGIF;
                    /* try { // try from 034b1810 to 035b1833 has its CatchHandler @ 034b1a34 */
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pFVar2))
    goto LAB_034b1b4c;
  }
  ppFVar9 = &(__this->fields).PAAIEEFEBKK;
  thunk_FUN_01c20e04(ppFVar9,IMMNELPBGIF);
  pFVar7 = *ppFVar9;
  if (pFVar7 != (FKLIOKJBFCI_o *)0x0) {
    pSVar6 = (System_Action_T__o *)(pFVar7->fields).LAALDDOEANK;
    if (pSVar6 != (System_Action_T__o *)0x0) {
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,pSVar6,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      pFVar7 = (__this->fields).PAAIEEFEBKK;
      if (pFVar7 == (FKLIOKJBFCI_o *)0x0) goto LAB_034b1b48;
    }
    if ((pFVar7->fields).LAALDDOEANK == (System_Action_object__o *)0x0) {
      pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,pSVar6,
                 Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    }
                    /* try { // try from 034b18e8 to 035b18ef has its CatchHandler @ 034b2084 */
                    /* try { // try from 034b18f0 to 035b18f7 has its CatchHandler @ 034b1e38 */
    Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,
               StringLiteral_3640/*"CANCEL"*/,0,in_x5);
    pFVar7 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 034b18f8 to 035b18ff has its CatchHandler @ 034b1e2c */
    if (pFVar7 != (FKLIOKJBFCI_o *)0x0) {
                    /* try { // try from 034b1900 to 035b1907 has its CatchHandler @ 034b1e28 */
                    /* try { // try from 034b1908 to 035b190b has its CatchHandler @ 034afe4c */
      if ((pFVar7->fields).LBICBAHHMLK != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* try { // try from 034b190c to 035b1913 has its CatchHandler @ 034b1d40 */
        __this_00 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,method_00);
                    /* try { // try from 034b1914 to 035b1917 has its CatchHandler @ 034b1c68 */
        pNVar8 = (__this->fields)._probabilityContent;
                    /* try { // try from 034b1918 to 035b191b has its CatchHandler @ 034b1c60 */
                    /* try { // try from 034b191c to 035b191f has its CatchHandler @ 034b1c58 */
                    /* try { // try from 034b1920 to 035b1923 has its CatchHandler @ 034b1c54 */
                    /* try { // try from 034b1924 to 035b1927 has its CatchHandler @ 034b1c50 */
                    /* try { // try from 034b1928 to 035b192f has its CatchHandler @ 034b1e44 */
                    /* try { // try from 034b1930 to 035b1937 has its CatchHandler @ 034b1c30 */
                    /* try { // try from 034b1938 to 035b193b has its CatchHandler @ 034b1b70 */
                    /* try { // try from 034b193c to 035b193f has its CatchHandler @ 034b1b6c */
                    /* try { // try from 034b1940 to 035b1943 has its CatchHandler @ 034b1b64 */
                    /* try { // try from 034b1944 to 035b1947 has its CatchHandler @ 034b1b60 */
        if (((pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) ||
            (pUVar4 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
            pUVar4 == (UnityEngine_RectTransform_o *)0x0)) ||
           (pUVar4->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_034b1b48;
                    /* try { // try from 034b1948 to 035b194b has its CatchHandler @ 034b1b5c */
                    /* try { // try from 034b194c to 035b194f has its CatchHandler @ 034b1b40 */
        UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b1950 to 035b1953 has its CatchHandler @ 034b1b3c */
                    /* try { // try from 034b1954 to 035b1957 has its CatchHandler @ 034b1b34 */
                    /* try { // try from 034b1958 to 035b195b has its CatchHandler @ 034b1b30 */
        pUVar4 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                           ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,method_01);
                    /* try { // try from 034b195c to 035b195f has its CatchHandler @ 034b1b2c */
        if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto LAB_034b1b48;
                    /* try { // try from 034b1960 to 035b1963 has its CatchHandler @ 034b1b0c */
                    /* try { // try from 034b1964 to 035b1967 has its CatchHandler @ 034b1b08 */
        UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b1968 to 035b196b has its CatchHandler @ 034b1b04 */
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_034b1b48;
                    /* try { // try from 034b196c to 035b196f has its CatchHandler @ 034b1b00 */
        UVar12.fields.x = UVar11.fields.x + UVar11.fields.x;
                    /* try { // try from 034b1970 to 035b1973 has its CatchHandler @ 034b1afc */
                    /* try { // try from 034b1974 to 035b197b has its CatchHandler @ 034b1ac4 */
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar12,(MethodInfo *)0x0);
                    /* try { // try from 034b197c to 035b197f has its CatchHandler @ 034b1c38 */
        __this_01 = (__this->fields).super.super._content;
                    /* try { // try from 034b1980 to 035b1983 has its CatchHandler @ 034b1ab8 */
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto LAB_034b1b48;
                    /* try { // try from 034b1984 to 035b1987 has its CatchHandler @ 034b1c38 */
                    /* try { // try from 034b1988 to 035b198b has its CatchHandler @ 034b1ab0 */
        pNVar8 = (__this->fields)._probabilityContent;
                    /* try { // try from 034b198c to 035b198f has its CatchHandler @ 034b1aac */
                    /* try { // try from 034b1990 to 035b1993 has its CatchHandler @ 034b1ad4 */
                    /* try { // try from 034b1994 to 035b1997 has its CatchHandler @ 034b1a90 */
        parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 034b1998 to 035b199b has its CatchHandler @ 034b1ad4 */
                    /* try { // try from 034b199c to 035b199f has its CatchHandler @ 034b1acc */
                    /* try { // try from 034b19a0 to 035b19a3 has its CatchHandler @ 034b1a8c */
                    /* try { // try from 034b19a4 to 035b19a7 has its CatchHandler @ 034b1a88 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034b19a8 to 035b19ab has its CatchHandler @ 034b1a84 */
                    /* try { // try from 034b19ac to 035b19af has its CatchHandler @ 034b1a80 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 034b19b0 to 035b19b3 has its CatchHandler @ 034b1acc */
                    /* try { // try from 034b19b4 to 035b19bb has its CatchHandler @ 034afe4c */
                    /* try { // try from 034b19bc to 035b19bf has its CatchHandler @ 034b1a64 */
        pNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pNVar8,parent,
                            Method_UnityEngine_Object_Instantiate<ProbabilityContent>__);
                    /* try { // try from 034b19c0 to 035b19c3 has its CatchHandler @ 034b1a40 */
                    /* try { // try from 034b19c4 to 035b19c7 has its CatchHandler @ 034b1a38 */
                    /* try { // try from 034b19c8 to 035b19cb has its CatchHandler @ 034b1a2c */
        (__this->fields).GIDBPFIPMGO = pNVar8;
                    /* try { // try from 034b19cc to 035b19d3 has its CatchHandler @ 034b1a60 */
        thunk_FUN_01c20e04(&(__this->fields).GIDBPFIPMGO);
        pFVar7 = (__this->fields).PAAIEEFEBKK;
                    /* try { // try from 034b19d4 to 035b19d7 has its CatchHandler @ 034b1a18 */
        if (pFVar7 == (FKLIOKJBFCI_o *)0x0) goto LAB_034b1b48;
      }
                    /* try { // try from 034b19d8 to 035b19db has its CatchHandler @ 034b1a14 */
                    /* try { // try from 034b19dc to 035b19df has its CatchHandler @ 034b1a10 */
      pNVar8 = (__this->fields)._probabilityContent;
                    /* try { // try from 034b19e0 to 035b19e3 has its CatchHandler @ 034b1a0c */
      pJVar10 = (pFVar7->fields).IKJOLJIIBOI;
                    /* try { // try from 034b19e4 to 035b19e7 has its CatchHandler @ 034b1a00 */
      pSVar5 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 034b19e8 to 035b19eb has its CatchHandler @ 034b19fc */
                    /* try { // try from 034b19ec to 035b19ef has its CatchHandler @ 034b19f8 */
                    /* try { // try from 034b19f0 to 035b1b93 has its CatchHandler @ 034afe4c */
                    /* catch() { ... } // from try @ 034b19ec with catch @ 034b19f8 */
                    /* catch() { ... } // from try @ 034b19e8 with catch @ 034b19fc */
      System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 034b19e4 with catch @ 034b1a00 */
      pFVar7 = (__this->fields).PAAIEEFEBKK;
                    /* catch() { ... } // from try @ 034b0b74 with catch @ 034b1a04 */
                    /* catch() { ... } // from try @ 034b0bb8 with catch @ 034b1a08 */
      if ((pFVar7 != (FKLIOKJBFCI_o *)0x0) &&
         (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0)) {
                    /* catch() { ... } // from try @ 034b19e0 with catch @ 034b1a0c */
                    /* catch() { ... } // from try @ 034b19dc with catch @ 034b1a10 */
                    /* catch() { ... } // from try @ 034b19d8 with catch @ 034b1a14 */
                    /* catch() { ... } // from try @ 034b19d4 with catch @ 034b1a18 */
                    /* catch() { ... } // from try @ 034b0b60 with catch @ 034b1a1c */
                    /* catch() { ... } // from try @ 034b0b40 with catch @ 034b1a20 */
                    /* catch() { ... } // from try @ 034b1770 with catch @ 034b1a24 */
                    /* catch() { ... } // from try @ 034b1724 with catch @ 034b1a28 */
                    /* catch() { ... } // from try @ 034b19c8 with catch @ 034b1a2c */
                    /* catch() { ... } // from try @ 034b16d8 with catch @ 034b1a30 */
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__Init
                  (pNVar8,pJVar10,pSVar5,(pFVar7->fields).FHMCDDGEAFI,(pFVar7->fields).IOBIGBAAAPD,
                   (pFVar7->fields).NKNLOCAHMHI,(pFVar7->fields).KBIPPAEJHLH,
                   (pFVar7->fields).BGNNHPMPKPN,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b1810 with catch @ 034b1a34 */
                    /* catch() { ... } // from try @ 034b19c4 with catch @ 034b1a38 */
        pNVar8 = (__this->fields).GIDBPFIPMGO;
                    /* catch() { ... } // from try @ 034b16f8 with catch @ 034b1a3c */
                    /* catch() { ... } // from try @ 034b19c0 with catch @ 034b1a40 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034b172c with catch @ 034b1a44 */
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 034b1744 with catch @ 034b1a48 */
                    /* catch() { ... } // from try @ 034b1714 with catch @ 034b1a4c */
                    /* catch() { ... } // from try @ 034b16f0 with catch @ 034b1a50 */
                    /* catch() { ... } // from try @ 034b0bdc with catch @ 034b1a54 */
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b0b0c with catch @ 034b1a58 */
        if (bVar3) {
                    /* catch() { ... } // from try @ 034b0b2c with catch @ 034b1a5c */
          pFVar7 = (__this->fields).PAAIEEFEBKK;
                    /* catch() { ... } // from try @ 034b19cc with catch @ 034b1a60 */
          if (pFVar7 == (FKLIOKJBFCI_o *)0x0) goto LAB_034b1b48;
                    /* catch() { ... } // from try @ 034b19bc with catch @ 034b1a64 */
                    /* catch() { ... } // from try @ 034b16b4 with catch @ 034b1a68 */
          pNVar8 = (__this->fields).GIDBPFIPMGO;
                    /* catch() { ... } // from try @ 034b1798 with catch @ 034b1a6c */
          pJVar10 = (pFVar7->fields).LBICBAHHMLK;
                    /* catch() { ... } // from try @ 034b16c0 with catch @ 034b1a70 */
          pSVar5 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* catch() { ... } // from try @ 034b1418 with catch @ 034b1a74 */
                    /* catch() { ... } // from try @ 034b1428 with catch @ 034b1a78 */
                    /* catch() { ... } // from try @ 034b1430 with catch @ 034b1a7c */
                    /* catch() { ... } // from try @ 034b19ac with catch @ 034b1a80 */
                    /* catch() { ... } // from try @ 034b19a8 with catch @ 034b1a84 */
                    /* catch() { ... } // from try @ 034b19a4 with catch @ 034b1a88 */
          System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 034b19a0 with catch @ 034b1a8c */
          pFVar7 = (__this->fields).PAAIEEFEBKK;
                    /* catch() { ... } // from try @ 034b1994 with catch @ 034b1a90 */
                    /* catch() { ... } // from try @ 034b1378 with catch @ 034b1a94 */
          if ((pFVar7 == (FKLIOKJBFCI_o *)0x0) ||
             (pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0)) goto LAB_034b1b48;
                    /* catch() { ... } // from try @ 034b1390 with catch @ 034b1a98 */
                    /* catch() { ... } // from try @ 034b1388 with catch @ 034b1a9c */
                    /* catch() { ... } // from try @ 034b0af8 with catch @ 034b1aa0 */
                    /* catch() { ... } // from try @ 034b0ad8 with catch @ 034b1aa4 */
                    /* catch() { ... } // from try @ 034b1698 with catch @ 034b1aa8 */
                    /* catch() { ... } // from try @ 034b198c with catch @ 034b1aac */
                    /* catch() { ... } // from try @ 034b1988 with catch @ 034b1ab0 */
                    /* catch() { ... } // from try @ 034b10ec with catch @ 034b1ab4 */
                    /* catch() { ... } // from try @ 034b1980 with catch @ 034b1ab8 */
                    /* catch() { ... } // from try @ 034b10f4 with catch @ 034b1abc */
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__Init
                    (pNVar8,pJVar10,pSVar5,(pFVar7->fields).AGGFDBCEJJM,(pFVar7->fields).KMMKPJHEHPH
                     ,(pFVar7->fields).LBBOKGMPHKM,(pFVar7->fields).KBIPPAEJHLH,
                     (pFVar7->fields).BGNNHPMPKPN,(MethodInfo *)0x0);
        }
                    /* catch() { ... } // from try @ 034b10dc with catch @ 034b1ac0 */
                    /* catch() { ... } // from try @ 034b1974 with catch @ 034b1ac4 */
                    /* catch() { ... } // from try @ 034b143c with catch @ 034b1ac8 */
                    /* catch() { ... } // from try @ 034b199c with catch @ 034b1acc
                       catch() { ... } // from try @ 034b19b0 with catch @ 034b1acc */
                    /* catch() { ... } // from try @ 034b139c with catch @ 034b1ad0 */
                    /* catch() { ... } // from try @ 034b1990 with catch @ 034b1ad4
                       catch() { ... } // from try @ 034b1998 with catch @ 034b1ad4 */
                    /* catch() { ... } // from try @ 034b134c with catch @ 034b1ad8 */
        source = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b1638 with catch @ 034b1adc */
                    /* catch() { ... } // from try @ 034b0a8c with catch @ 034b1ae0 */
                    /* catch() { ... } // from try @ 034b0a68 with catch @ 034b1ae4 */
                    /* catch() { ... } // from try @ 034b0a70 with catch @ 034b1ae8 */
        pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* catch() { ... } // from try @ 034b0b94 with catch @ 034b1aec */
                    /* catch() { ... } // from try @ 034b0ac4 with catch @ 034b1af0 */
                    /* catch() { ... } // from try @ 034b0ba0 with catch @ 034b1af4 */
                    /* catch() { ... } // from try @ 034b0a18 with catch @ 034b1af8 */
                    /* catch() { ... } // from try @ 034b1970 with catch @ 034b1afc */
                    /* catch() { ... } // from try @ 034b196c with catch @ 034b1b00 */
        System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 034b1968 with catch @ 034b1b04 */
                    /* catch() { ... } // from try @ 034b1964 with catch @ 034b1b08 */
                    /* catch() { ... } // from try @ 034b1960 with catch @ 034b1b0c */
                    /* catch() { ... } // from try @ 034b0aa4 with catch @ 034b1b10 */
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               ((System_IObservable_T__o *)source,pSVar6,
                                Method_UniRx_ObservableExtensions_Subscribe<object>__);
                    /* catch() { ... } // from try @ 034b0aac with catch @ 034b1b14 */
                    /* catch() { ... } // from try @ 034b0a50 with catch @ 034b1b18 */
                    /* catch() { ... } // from try @ 034b0a00 with catch @ 034b1b1c */
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).HBJPBPBIOOB,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
                    /* catch() { ... } // from try @ 034b0e6c with catch @ 034b1b20 */
        __this_02 = (__this->fields)._closeButton;
                    /* catch() { ... } // from try @ 034b0e84 with catch @ 034b1b24 */
        if (__this_02 != (CloseButton_o *)0x0) {
                    /* catch() { ... } // from try @ 034b0ea4 with catch @ 034b1b28 */
                    /* catch() { ... } // from try @ 034b195c with catch @ 034b1b2c */
                    /* catch() { ... } // from try @ 034b1958 with catch @ 034b1b30 */
                    /* catch() { ... } // from try @ 034b1954 with catch @ 034b1b34 */
                    /* catch() { ... } // from try @ 034b0e7c with catch @ 034b1b38 */
                    /* catch() { ... } // from try @ 034b1950 with catch @ 034b1b3c */
                    /* catch() { ... } // from try @ 034b194c with catch @ 034b1b40 */
                    /* catch() { ... } // from try @ 034b0e28 with catch @ 034b1b44 */
          CloseButton__PlayIdleAnimation(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034b1b48:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034b0e38 with catch @ 034b1b48 */
  FUN_01bab8c8();
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x33B1B54]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$LCGFJKFJKJK @ RVA 0x33B1B54

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 034b07bc with catch @ 034b1b54 */
  return;
}


// ===== protected override void KHKLLNFCMME()  [RVA 0x33B1B58]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$KHKLLNFCMME @ RVA 0x33B1B58

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__KHKLLNFCMME
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 034b07dc with catch @ 034b1b58 */
  return;
}


// ===== private void KMJPPCLIEDG(object IMMNELPBGIF)  [RVA 0x33B1B5C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$KMJPPCLIEDG @ RVA 0x33B1B5C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__KMJPPCLIEDG
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  Roster_o *pAVar4;
  int64_t iVar5;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *in_x3;
  FKLIOKJBFCI_o *pFVar6;
  long lVar7;
  HOOAAGABMBL_o *pHVar8;
  
                    /* catch() { ... } // from try @ 034b1948 with catch @ 034b1b5c */
                    /* catch() { ... } // from try @ 034b1944 with catch @ 034b1b60 */
                    /* catch() { ... } // from try @ 034b1940 with catch @ 034b1b64 */
                    /* catch() { ... } // from try @ 034b07b4 with catch @ 034b1b68 */
                    /* catch() { ... } // from try @ 034b193c with catch @ 034b1b6c */
                    /* catch() { ... } // from try @ 034b1938 with catch @ 034b1b70 */
                    /* catch() { ... } // from try @ 034b0784 with catch @ 034b1b74 */
                    /* catch() { ... } // from try @ 034b076c with catch @ 034b1b78 */
  if ((DAT_04567d50 & 1) == 0) {
                    /* catch() { ... } // from try @ 034b15dc with catch @ 034b1b7c */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
                    /* try { // try from 034b1b94 to 035b1b97 has its CatchHandler @ 034b1ba4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034b1b94 with catch @ 034b1ba4 */
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
                    /* try { // try from 034b1bb4 to 035b1c2f has its CatchHandler @ 034b2154 */
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    DAT_04567d50 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar3 = (int *)thunk_FUN_01bda96c();
    pFVar6 = (__this->fields).PAAIEEFEBKK;
    if (pFVar6 != (FKLIOKJBFCI_o *)0x0) {
      lVar7 = 0x18;
      if (*piVar3 != 1) {
        lVar7 = 0x20;
      }
      lVar7 = *(long *)((long)&pFVar6->klass + lVar7);
      if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 034b1d80 with catch @ 034b1d9c */
        return;
      }
      iVar1 = *(int *)(lVar7 + 0x38);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 034b1930 with catch @ 034b1c30
                       try { // try from 034b1c30 to 035b1c97 has its CatchHandler @ 034afe4c */
                    /* catch() { ... } // from try @ 034b10b0 with catch @ 034b1c34 */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 034b197c with catch @ 034b1c38
                       catch() { ... } // from try @ 034b1984 with catch @ 034b1c38 */
                    /* catch() { ... } // from try @ 034b1100 with catch @ 034b1c3c */
                    /* catch() { ... } // from try @ 034b12ec with catch @ 034b1c40 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034b04cc with catch @ 034b1c44 */
                    /* catch() { ... } // from try @ 034b04b4 with catch @ 034b1c48 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 034b0480 with catch @ 034b1c4c */
                    /* catch() { ... } // from try @ 034b1924 with catch @ 034b1c50 */
                    /* catch() { ... } // from try @ 034b1920 with catch @ 034b1c54 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034b191c with catch @ 034b1c58 */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 034b051c with catch @ 034b1c5c */
      }
                    /* catch() { ... } // from try @ 034b1918 with catch @ 034b1c60 */
                    /* catch() { ... } // from try @ 034b0458 with catch @ 034b1c64 */
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 034b1914 with catch @ 034b1c68 */
      if (pAVar4 != (Roster_o *)0x0) {
                    /* catch() { ... } // from try @ 034b04c4 with catch @ 034b1c6c */
                    /* catch() { ... } // from try @ 034b0490 with catch @ 034b1c70 */
        iVar5 = Roster__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b0498 with catch @ 034b1c74 */
        pHVar8 = (__this->fields).itemToBuy;
                    /* catch() { ... } // from try @ 034b0460 with catch @ 034b1c78 */
                    /* catch() { ... } // from try @ 034b0448 with catch @ 034b1c7c */
        if (iVar5 < iVar1) {
                    /* catch() { ... } // from try @ 034b1290 with catch @ 034b1c80 */
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 034b1c98 to 035b1c9b has its CatchHandler @ 034b1cb4 */
          GameUtils__EHEMFMCGKKK(pHVar8,6,(MethodInfo *)0x0);
          return;
        }
                    /* catch() { ... } // from try @ 034b1c98 with catch @ 034b1cb4 */
        if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 034b1cc4 to 035b1d3f has its CatchHandler @ 034b2154 */
          bVar2 = System_String__op_Equality
                            ((pHVar8->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10823/*"RaidConsumable"*/,
                             (MethodInfo *)0x0);
          if (bVar2) {
LAB_034b1cf8:
            AMIINPEKKFB__AOBOOIINCOA
                      ((__this->fields).itemToBuy,(System_Action_BKKPAKHJDKB__o *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
          pHVar8 = (__this->fields).itemToBuy;
          if (pHVar8 != (HOOAAGABMBL_o *)0x0) {
            bVar2 = System_String__op_Equality
                              ((pHVar8->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876/*"RaidItemPack"*/,
                               (MethodInfo *)0x0);
            if (bVar2) goto LAB_034b1cf8;
            bVar2 = AMIINPEKKFB__CNDGBHMOMJB((__this->fields).itemToBuy,(MethodInfo *)0x0);
            if (!bVar2) {
              return;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 034b190c with catch @ 034b1d40
                       try { // try from 034b1d40 to 035b1d7f has its CatchHandler @ 034afe4c */
                    /* catch() { ... } // from try @ 034b0a20 with catch @ 034b1d44 */
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 034b09e0 with catch @ 034b1d48 */
                    /* catch() { ... } // from try @ 034b09c4 with catch @ 034b1d4c */
              DAT_04565b7d = '\x01';
            }
                    /* catch() { ... } // from try @ 034b0e40 with catch @ 034b1d50 */
                    /* catch() { ... } // from try @ 034b0df4 with catch @ 034b1d54 */
                    /* catch() { ... } // from try @ 034b0e08 with catch @ 034b1d58 */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034b074c with catch @ 034b1d5c */
              thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 034b0738 with catch @ 034b1d60 */
            }
                    /* catch() { ... } // from try @ 034b1050 with catch @ 034b1d64 */
                    /* catch() { ... } // from try @ 034b0ff4 with catch @ 034b1d68 */
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar4 != (Roster_o *)0x0) &&
               (__this_00 = (pAVar4->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
                    /* try { // try from 034b1d80 to 035b1d83 has its CatchHandler @ 034b1d9c */
              GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).itemToBuy,true,in_x3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x33B2234]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$EJHAPHAHMHG @ RVA 0x33B2234

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,System_String_o *EHNFGMGKCHO
               ,MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x33B2238]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$OnDestroy @ RVA 0x33B2238

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,method);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLANJNFACKI()  [RVA 0x33B225C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$GLANJNFACKI @ RVA 0x33B225C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x33B2260]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$.ctor @ RVA 0x33B2260

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d51 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567d51 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_00);
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x33B22CC]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$IGDDKJJMDLP @ RVA 0x33B22CC

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x33B22D0]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$GLJGIJNALCA @ RVA 0x33B22D0

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x33B22D4]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$UpdateHeaderPosition @ RVA 0x33B22D4

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void FMJHHEJDAKI()  [RVA 0x33B22D8]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$FMJHHEJDAKI @ RVA 0x33B22D8

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__FMJHHEJDAKI
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  return;
}

