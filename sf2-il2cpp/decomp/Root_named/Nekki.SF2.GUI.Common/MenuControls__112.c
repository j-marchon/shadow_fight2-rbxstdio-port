// TypeDefIndex 112
// Namespace: Nekki.SF2.GUI.Common
// public class MenuControls : MonoBehaviour
// Fields:
//   private static MenuControls CNMHHKAMGPI; // 0x0
//   public const LGMNENGMMOF AcceptKey = 0;
//   public const LGMNENGMMOF CancelKey = 1;
//   public const LGMNENGMMOF ExtraKey0 = 2;
//   public const LGMNENGMMOF ExtraKey1 = 3;
//   public const float _KeyControlsCooldown = 0.2;
//   private float ABBIIGOGPGF; // 0x20
//   public static ADINBPPGIOA LastInputType; // 0x8
//   private List<MenuControls.KOEABALFPHM> ELOFOCJPGDO; // 0x28
//   private List<MenuControls.ADIEOGDNDIO> CBCDEIKGGDK; // 0x30
//   private OCOAGJDCJPL KIHMKIEFOEI; // 0x38
//   private JPGJLKENNCC GMLEPHMBMPD; // 0x40
//   private EECMMJDOPDJ ALALIGAEHDK; // 0x48
//   private CEAGEFMDAAN MODIIOJEMLE; // 0x50
//   private MenuControls.EBHCGCMCBML JOIIFEDGBGK; // 0x58

// ===== public JPGJLKENNCC get_OnKeyUp()  [RVA 0x300CAF4]
// Nekki.SF2.GUI.Common.MenuControls$$get_OnKeyUp @ RVA 0x300CAF4

JPGJLKENNCC_o *
Nekki_SF2_GUI_Common_MenuControls__get_OnKeyUp
          (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  return (__this->fields).GMLEPHMBMPD;
}


// ===== public static MenuControls get_Current()  [RVA 0x300CAFC]
// Nekki.SF2.GUI.Common.MenuControls$$get_Current @ RVA 0x300CAFC

Nekki_SF2_GUI_Common_MenuControls_o *
Nekki_SF2_GUI_Common_MenuControls__get_Current(MethodInfo *method)

{
  if ((DAT_04565b8a & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8a = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls__GIENGNEGHPJ(method);
  return Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== private void Awake()  [RVA 0x300CC70]
// Nekki.SF2.GUI.Common.MenuControls$$Awake @ RVA 0x300CC70

void Nekki_SF2_GUI_Common_MenuControls__Awake
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  if ((DAT_04565b8b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8b = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = 0;
  return;
}


// ===== private void Update()  [RVA 0x300CCB8]
// Nekki.SF2.GUI.Common.MenuControls$$Update @ RVA 0x300CCB8

void Nekki_SF2_GUI_Common_MenuControls__Update
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).ABBIIGOGPGF;
  if (fVar2 <= 0.0) {
    Nekki_SF2_GUI_Common_MenuControls__JHIHLJOGBDD(__this,method);
    Nekki_SF2_GUI_Common_MenuControls__AGMBOMIMNAC(__this,method_00);
    method_01 = extraout_x1_00;
  }
  else {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).ABBIIGOGPGF = fVar2 - fVar1;
    method_01 = extraout_x1;
  }
  Nekki_SF2_GUI_Common_MenuControls__MBACEABHPLC(__this,method_01);
  Nekki_SF2_GUI_Common_MenuControls__LNAEFOJKLIM(__this,method_02);
  Nekki_SF2_GUI_Common_MenuControls__ICKIMMADNPK(__this,method_03);
  Nekki_SF2_GUI_Common_MenuControls__NPNPFBOPKIA(__this,method_04);
  return;
}


// ===== public void .ctor()  [RVA 0x300D53C]
// Nekki.SF2.GUI.Common.MenuControls$$.ctor @ RVA 0x300D53C

void Nekki_SF2_GUI_Common_MenuControls___ctor
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_00;
  UnityEngine_KeyCode_array *pUVar4;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *pNVar5;
  UnityEngine_KeyCode_array **ppUVar6;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o **ppSVar7;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *pNVar8;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o **ppSVar9;
  OCOAGJDCJPL_o *__this_02;
  OCOAGJDCJPL_o **ppOVar10;
  JPGJLKENNCC_o *__this_03;
  JPGJLKENNCC_o **ppJVar11;
  EECMMJDOPDJ_o *__this_04;
  EECMMJDOPDJ_o **ppEVar12;
  CEAGEFMDAAN_o *__this_05;
  CEAGEFMDAAN_o **ppCVar13;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this_06;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o **ppNVar14;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *pNVar15;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array *pNVar16;
  int32_t *piVar17;
  int32_t *piVar18;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__Fields *pSVar19;
  undefined1 auVar20 [16];
  
  if ((DAT_04565b8c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo);
    FUN_01bab630(&CEAGEFMDAAN_TypeInfo);
                    /* try { // try from 0310d590 to 0320d59f has its CatchHandler @ 0310d5a0 */
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_TypeInfo);
                    /* catch() { ... } // from try @ 0310d510 with catch @ 0310d5a0
                       catch() { ... } // from try @ 0310d590 with catch @ 0310d5a0 */
                    /* try { // try from 0310d5a4 to 0320d5a7 has its CatchHandler @ 0310d5b0 */
    FUN_01bab630(&EECMMJDOPDJ_TypeInfo);
                    /* try { // try from 0310d5a8 to 0320d5b3 has its CatchHandler @ 0310c418 */
                    /* catch() { ... } // from try @ 0310d4e0 with catch @ 0310d5b0
                       catch() { ... } // from try @ 0310d5a4 with catch @ 0310d5b0 */
    FUN_01bab630(&JPGJLKENNCC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
    FUN_01bab630(&UnityEngine_KeyCode___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_TypeInfo);
    FUN_01bab630(&OCOAGJDCJPL_TypeInfo);
    DAT_04565b8c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MenuControls_KOEABALFPHM>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>__ctor__);
  pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,2);
  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
    iVar1 = (int)pUVar4->max_length;
    if ((iVar1 == 0) || (pUVar4->m_Items[0] = 0xd, iVar1 == 1)) goto LAB_0310eca0;
    pUVar4->m_Items[1] = 0x10f;
    pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
    System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
    (pNVar5->fields).LCDNJBFAOHM = 0;
    ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
    *ppUVar6 = pUVar4;
    thunk_FUN_01c20e04(ppUVar6,pUVar4);
    lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
    if (__this_00 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      pNVar15 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pNVar15->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pNVar15->m_Items[(int)uVar2] = pNVar5;
          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
          if ((int)pUVar4->max_length == 0) {
LAB_0310eca0:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pUVar4->m_Items[0] = 0x1b;
          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                   thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
          System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
          (pNVar5->fields).LCDNJBFAOHM = 1;
          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
          *ppUVar6 = pUVar4;
          thunk_FUN_01c20e04(ppUVar6,pUVar4);
          lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
          pNVar15 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pNVar15->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pNVar15->m_Items[(int)uVar2] = pNVar5;
              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (Il2CppObject *)pNVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
              pUVar4->m_Items[0] = 0x2d;
              pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                       thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo);
              System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
              (pNVar5->fields).LCDNJBFAOHM = 2;
              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
              *ppUVar6 = pUVar4;
              thunk_FUN_01c20e04(ppUVar6,pUVar4);
              lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
              pNVar15 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pNVar15->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)pNVar5,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pUVar4 = (UnityEngine_KeyCode_array *)FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1)
                ;
                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                  if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                  pUVar4->m_Items[0] = 0x2b;
                  pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                           thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                             );
                  System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                  (pNVar5->fields).LCDNJBFAOHM = 3;
                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                  *ppUVar6 = pUVar4;
                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                  lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
                  pNVar15 = (__this_00->fields)._items;
                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                  if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                    uVar2 = (__this_00->fields)._size;
                    if (uVar2 < (uint)pNVar15->max_length) {
                      (__this_00->fields)._size = uVar2 + 1;
                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                      thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_00,
                                 (Il2CppObject *)pNVar5,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                    }
                    pUVar4 = (UnityEngine_KeyCode_array *)
                             FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                    if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                      if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                      pUVar4->m_Items[0] = 0x114;
                      pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                               thunk_FUN_01bda818(
                                                 Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                 );
                      System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                      (pNVar5->fields).LCDNJBFAOHM = 5;
                      ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                      *ppUVar6 = pUVar4;
                      thunk_FUN_01c20e04(ppUVar6,pUVar4);
                      lVar3 = Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                      ;
                      pNVar15 = (__this_00->fields)._items;
                      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                      if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                        uVar2 = (__this_00->fields)._size;
                        if (uVar2 < (uint)pNVar15->max_length) {
                          (__this_00->fields)._size = uVar2 + 1;
                          pNVar15->m_Items[(int)uVar2] = pNVar5;
                          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_00,
                                     (Il2CppObject *)pNVar5,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                        }
                        pUVar4 = (UnityEngine_KeyCode_array *)
                                 FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                          if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                          pUVar4->m_Items[0] = 0x113;
                          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                   thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                          System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                          (pNVar5->fields).LCDNJBFAOHM = 4;
                          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                          *ppUVar6 = pUVar4;
                          thunk_FUN_01c20e04(ppUVar6,pUVar4);
                          lVar3 = 
                          Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__;
                          pNVar15 = (__this_00->fields)._items;
                          (__this_00->fields)._version = (__this_00->fields)._version + 1;
                          if (pNVar15 != (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0)
                          {
                            uVar2 = (__this_00->fields)._size;
                            if (uVar2 < (uint)pNVar15->max_length) {
                              (__this_00->fields)._size = uVar2 + 1;
                              pNVar15->m_Items[(int)uVar2] = pNVar5;
                              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        ((System_Collections_Generic_List_object__o *)__this_00,
                                         (Il2CppObject *)pNVar5,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                            }
                            pUVar4 = (UnityEngine_KeyCode_array *)
                                     FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                              pUVar4->m_Items[0] = 0x111;
                              pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                       thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                              System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                              (pNVar5->fields).LCDNJBFAOHM = 6;
                              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                              *ppUVar6 = pUVar4;
                              thunk_FUN_01c20e04(ppUVar6,pUVar4);
                              lVar3 = 
                              Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                              ;
                              pNVar15 = (__this_00->fields)._items;
                              (__this_00->fields)._version = (__this_00->fields)._version + 1;
                              if (pNVar15 !=
                                  (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                                uVar2 = (__this_00->fields)._size;
                                if (uVar2 < (uint)pNVar15->max_length) {
                                  (__this_00->fields)._size = uVar2 + 1;
                                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_00,
                                             (Il2CppObject *)pNVar5,
                                             *(MethodInfo_26E4DAC **)
                                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                }
                                pUVar4 = (UnityEngine_KeyCode_array *)
                                         FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                  if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                  pUVar4->m_Items[0] = 0x112;
                                  pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                           thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                  System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                  (pNVar5->fields).LCDNJBFAOHM = 7;
                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                  *ppUVar6 = pUVar4;
                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                  lVar3 = 
                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                  ;
                                  pNVar15 = (__this_00->fields)._items;
                                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                                  if (pNVar15 !=
                                      (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0) {
                                    uVar2 = (__this_00->fields)._size;
                                    if (uVar2 < (uint)pNVar15->max_length) {
                                      (__this_00->fields)._size = uVar2 + 1;
                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                      thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,(Il2CppObject *)pNVar5,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    pUVar4 = (UnityEngine_KeyCode_array *)
                                             FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                    if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                      if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                      pUVar4->m_Items[0] = 0x5b;
                                      pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                               thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                      System_Object___ctor((Il2CppObject *)pNVar5,(MethodInfo *)0x0)
                                      ;
                                      (pNVar5->fields).LCDNJBFAOHM = 0x12;
                                      ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                      *ppUVar6 = pUVar4;
                                      thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                      lVar3 = 
                                      Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                      ;
                                      pNVar15 = (__this_00->fields)._items;
                                      (__this_00->fields)._version =
                                           (__this_00->fields)._version + 1;
                                      if (pNVar15 !=
                                          (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *)0x0
                                         ) {
                                        uVar2 = (__this_00->fields)._size;
                                        if (uVar2 < (uint)pNVar15->max_length) {
                                          (__this_00->fields)._size = uVar2 + 1;
                                          pNVar15->m_Items[(int)uVar2] = pNVar5;
                                          thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,pNVar5);
                                        }
                                        else {
                                          System_Collections_Generic_List<object>__AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)
                                                     __this_00,(Il2CppObject *)pNVar5,
                                                     *(MethodInfo_26E4DAC **)
                                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        pUVar4 = (UnityEngine_KeyCode_array *)
                                                 FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                        if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                          if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                          pUVar4->m_Items[0] = 0x5d;
                                          pNVar5 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o
                                                    *)thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                          System_Object___ctor
                                                    ((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                          (pNVar5->fields).LCDNJBFAOHM = 0x14;
                                          ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                          *ppUVar6 = pUVar4;
                                          thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                          lVar3 = 
                                          Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                          ;
                                          pNVar15 = (__this_00->fields)._items;
                                          (__this_00->fields)._version =
                                               (__this_00->fields)._version + 1;
                                          if (pNVar15 !=
                                              (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array *
                                              )0x0) {
                                            uVar2 = (__this_00->fields)._size;
                                            if (uVar2 < (uint)pNVar15->max_length) {
                                              (__this_00->fields)._size = uVar2 + 1;
                                              pNVar15->m_Items[(int)uVar2] = pNVar5;
                                              thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,
                                                                 pNVar5);
                                            }
                                            else {
                                              System_Collections_Generic_List<object>__AddWithResize
                                                        ((System_Collections_Generic_List_object__o
                                                          *)__this_00,(Il2CppObject *)pNVar5,
                                                         *(MethodInfo_26E4DAC **)
                                                          (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0)
                                                          + 0x70));
                                            }
                                            pUVar4 = (UnityEngine_KeyCode_array *)
                                                     FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                                            if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                              if ((int)pUVar4->max_length == 0) goto LAB_0310eca0;
                                              pUVar4->m_Items[0] = 0x3b;
                                              pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                              System_Object___ctor
                                                        ((Il2CppObject *)pNVar5,(MethodInfo *)0x0);
                                              (pNVar5->fields).LCDNJBFAOHM = 0x13;
                                              ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                              *ppUVar6 = pUVar4;
                                              thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                              lVar3 = 
                                              Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                              ;
                                              pNVar15 = (__this_00->fields)._items;
                                              (__this_00->fields)._version =
                                                   (__this_00->fields)._version + 1;
                                              if (pNVar15 !=
                                                  (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                uVar2 = (__this_00->fields)._size;
                                                if (uVar2 < (uint)pNVar15->max_length) {
                                                  (__this_00->fields)._size = uVar2 + 1;
                                                  pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                  thunk_FUN_01c20e04(pNVar15->m_Items + (int)uVar2,
                                                                     pNVar5);
                                                }
                                                else {
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                }
                                                pUVar4 = (UnityEngine_KeyCode_array *)
                                                         FUN_01bab718(UnityEngine_KeyCode___TypeInfo
                                                                      ,1);
                                                if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                  if ((int)pUVar4->max_length == 0)
                                                  goto LAB_0310eca0;
                                                  pUVar4->m_Items[0] = 0x27;
                                                  pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x15;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pUVar4 = (UnityEngine_KeyCode_array *)
                                                           FUN_01bab718(
                                                  UnityEngine_KeyCode___TypeInfo,1);
                                                  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                    if ((int)pUVar4->max_length == 0)
                                                    goto LAB_0310eca0;
                                                    pUVar4->m_Items[0] = 0x62;
                                                    pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x16;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pUVar4 = (UnityEngine_KeyCode_array *)
                                                           FUN_01bab718(
                                                  UnityEngine_KeyCode___TypeInfo,1);
                                                  if (pUVar4 != (UnityEngine_KeyCode_array *)0x0) {
                                                    if ((int)pUVar4->max_length == 0)
                                                    goto LAB_0310eca0;
                                                    pUVar4->m_Items[0] = 0x20;
                                                    pNVar5 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar5,
                                                             (MethodInfo *)0x0);
                                                  (pNVar5->fields).LCDNJBFAOHM = 0x17;
                                                  ppUVar6 = &(pNVar5->fields).FKGFFHPFKHH;
                                                  *ppUVar6 = pUVar4;
                                                  thunk_FUN_01c20e04(ppUVar6,pUVar4);
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Add__
                                                  ;
                                                  pNVar15 = (__this_00->fields)._items;
                                                  (__this_00->fields)._version =
                                                       (__this_00->fields)._version + 1;
                                                  if (pNVar15 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_array
                                                  *)0x0) {
                                                    uVar2 = (__this_00->fields)._size;
                                                    if (uVar2 < (uint)pNVar15->max_length) {
                                                      (__this_00->fields)._size = uVar2 + 1;
                                                      pNVar15->m_Items[(int)uVar2] = pNVar5;
                                                      thunk_FUN_01c20e04(pNVar15->m_Items +
                                                                         (int)uVar2,pNVar5);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_00,(Il2CppObject *)pNVar5,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  ppSVar7 = &(__this->fields).ELOFOCJPGDO;
                                                  *ppSVar7 = __this_00;
                                                  thunk_FUN_01c20e04(ppSVar7,__this_00);
                                                  __this_01 = (
                                                  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o
                                                  *)thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_TypeInfo
                                                  );
                                                  System_Collections_Generic_List<object>___ctor
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>__ctor__
                                                  );
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0;
                                                  if (__this_01 !=
                                                      (
                                                  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o
                                                  *)0x0) {
                                                    piVar18 = &(__this_01->fields)._version;
                                                    *piVar18 = *piVar18 + 1;
                                                    pSVar19 = &__this_01->fields;
                                                    pNVar16 = pSVar19->_items;
                                                    piVar17 = &(__this_01->fields)._size;
                                                    uVar2 = *piVar17;
                                                    if (pNVar16 !=
                                                        (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 1;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 1;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 2;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 2;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 3;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 3;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 5;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 6;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 4;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 7;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 6;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 4;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 7;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 5;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 9;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xb;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 8;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xc;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 10;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 9;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xb;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 10;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xd;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x10;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xc;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x11;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xe;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xe;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0xf;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xf;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x10;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 8;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x11;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0xd;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x12;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x12;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x14;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x13;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x13;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x14;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x15;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x15;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x16;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x17;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  pNVar8 = (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_TypeInfo
                                                  );
                                                  System_Object___ctor
                                                            ((Il2CppObject *)pNVar8,
                                                             (MethodInfo *)0x0);
                                                  (pNVar8->fields).LCDNJBFAOHM = 0x17;
                                                  lVar3 = 
                                                  Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Add__
                                                  ;
                                                  (pNVar8->fields).EDCHCICLDBD = 0x16;
                                                  *piVar18 = *piVar18 + 1;
                                                  pNVar16 = pSVar19->_items;
                                                  if (pNVar16 !=
                                                      (
                                                  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_array
                                                  *)0x0) {
                                                    uVar2 = *piVar17;
                                                    if (uVar2 < (uint)pNVar16->max_length) {
                                                      *piVar17 = uVar2 + 1;
                                                      pNVar16->m_Items[(int)uVar2] = pNVar8;
                                                      thunk_FUN_01c20e04(pNVar16->m_Items +
                                                                         (int)uVar2,pNVar8);
                                                    }
                                                    else {
                                                                                                            
                                                  System_Collections_Generic_List<object>__AddWithResize
                                                            ((
                                                  System_Collections_Generic_List_object__o *)
                                                  __this_01,(Il2CppObject *)pNVar8,
                                                  *(MethodInfo_26E4DAC **)
                                                   (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70
                                                   ));
                                                  }
                                                  ppSVar9 = &(__this->fields).CBCDEIKGGDK;
                                                  *ppSVar9 = __this_01;
                                                  thunk_FUN_01c20e04(ppSVar9,__this_01);
                                                  __this_02 = (OCOAGJDCJPL_o *)
                                                              thunk_FUN_01bda818(
                                                  OCOAGJDCJPL_TypeInfo);
                                                  OCOAGJDCJPL___ctor(__this_02,(MethodInfo *)0x0);
                                                  ppOVar10 = &(__this->fields).KIHMKIEFOEI;
                                                  *ppOVar10 = __this_02;
                                                  thunk_FUN_01c20e04(ppOVar10,__this_02);
                                                  __this_03 = (JPGJLKENNCC_o *)
                                                              thunk_FUN_01bda818(
                                                  JPGJLKENNCC_TypeInfo);
                                                  JPGJLKENNCC___ctor(__this_03,(MethodInfo *)0x0);
                                                  ppJVar11 = &(__this->fields).GMLEPHMBMPD;
                                                  *ppJVar11 = __this_03;
                                                  thunk_FUN_01c20e04(ppJVar11,__this_03);
                                                  __this_04 = (EECMMJDOPDJ_o *)
                                                              thunk_FUN_01bda818(
                                                  EECMMJDOPDJ_TypeInfo);
                                                  EECMMJDOPDJ___ctor(__this_04,(MethodInfo *)0x0);
                                                  ppEVar12 = &(__this->fields).ALALIGAEHDK;
                                                  *ppEVar12 = __this_04;
                                                  thunk_FUN_01c20e04(ppEVar12,__this_04);
                                                  __this_05 = (CEAGEFMDAAN_o *)
                                                              thunk_FUN_01bda818(
                                                  CEAGEFMDAAN_TypeInfo);
                                                  CEAGEFMDAAN___ctor(__this_05,(MethodInfo *)0x0);
                                                  ppCVar13 = &(__this->fields).MODIIOJEMLE;
                                                  *ppCVar13 = __this_05;
                                                  thunk_FUN_01c20e04(ppCVar13,__this_05);
                                                  auVar20 = thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_TypeInfo
                                                  );
                                                  __this_06 = auVar20._0_8_;
                                                  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML___ctor
                                                            (__this_06,auVar20._8_8_);
                                                  ppNVar14 = &(__this->fields).JOIIFEDGBGK;
                                                  *ppNVar14 = __this_06;
                                                  thunk_FUN_01c20e04(ppNVar14,__this_06);
                                                  UnityEngine_MonoBehaviour___ctor
                                                            ((UnityEngine_MonoBehaviour_o *)__this,
                                                             (MethodInfo *)0x0);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsKeyDown(FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300ED90]
// Nekki.SF2.GUI.Common.MenuControls$$IsKeyDown @ RVA 0x300ED90

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar4;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_04;
  int OPHMGAKOJLP;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_05;
  
  if ((DAT_04565b8d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_APILIOKLILP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_HNAFBBDFKDC__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b8d = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    __this_05 = (__this->fields).ELOFOCJPGDO;
    pSVar4 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_05 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_05,pSVar4,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__BHHIIBFHBFK(__this_01,method_00),
         !bVar2)) {
        __this_04 = (__this->fields).CBCDEIKGGDK;
        pSVar4 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_04 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310ef3c;
        method_01 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_04,pSVar4,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        bVar2 = false;
        if (__this_02 != (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
          __this_03 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current
                                ((MethodInfo *)0x0);
          if (__this_03 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0)
          goto LAB_0310ef3c;
          iVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                            (__this_03,(MethodInfo *)0x0);
          if (iVar3 < 1) {
            bVar2 = false;
          }
          else {
            OPHMGAKOJLP = 0;
            do {
              bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
                                (__this_02,OPHMGAKOJLP,method_01);
              if (bVar2) {
                return true;
              }
              bVar1 = iVar3 + -1 != OPHMGAKOJLP;
              OPHMGAKOJLP = OPHMGAKOJLP + 1;
              bVar2 = false;
            } while (bVar1);
          }
        }
      }
      else {
        bVar2 = true;
      }
      return bVar2;
    }
  }
LAB_0310ef3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PNJANJEGPOE(int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x300F08C]
// Nekki.SF2.GUI.Common.MenuControls$$PNJANJEGPOE @ RVA 0x300F08C

void Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar2;
  float GKNIEGGEIFD;
  
  pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetAxis
                      (pNVar2,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      GKNIEGGEIFD = Nekki_SF2_Core_InputControllers_GamePadController__GetAxisValue
                              (pNVar2,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Common_MenuControls__FOOJINDABEO
                (__this,2,OPHMGAKOJLP,AAJGEHHPMGH,GKNIEGGEIFD,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLNNPOHGDML(int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x300F1C0]
// Nekki.SF2.GUI.Common.MenuControls$$LLNNPOHGDML @ RVA 0x300F1C0

void Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetAxisUp
                    (__this_00,OPHMGAKOJLP,IHCDJFOBOEI,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Common_MenuControls__HJNEBABOEIH(__this,2,OPHMGAKOJLP,AAJGEHHPMGH,method);
    return;
  }
  return;
}


// ===== private void NPNPFBOPKIA()  [RVA 0x300D450]
// Nekki.SF2.GUI.Common.MenuControls$$NPNPFBOPKIA @ RVA 0x300D450

void Nekki_SF2_GUI_Common_MenuControls__NPNPFBOPKIA
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  MethodInfo *in_x4;
  int OPHMGAKOJLP;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0310d078 with catch @ 0310d470 */
                    /* catch() { ... } // from try @ 0310d348 with catch @ 0310d474 */
    if (0 < iVar1) {
      OPHMGAKOJLP = 0;
      do {
                    /* try { // try from 0310d48c to 0320d4a3 has its CatchHandler @ 0310d4dc */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,0,0,in_x4);
                    /* try { // try from 0310d4a4 to 0320d4c7 has its CatchHandler @ 0310c418 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,1,1,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,2,2,in_x4);
                    /* try { // try from 0310d4c8 to 0320d4d7 has its CatchHandler @ 0310d4dc */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,3,3,in_x4);
                    /* catch() { ... } // from try @ 0310d48c with catch @ 0310d4dc
                       catch() { ... } // from try @ 0310d4c8 with catch @ 0310d4dc */
                    /* try { // try from 0310d4e0 to 0320d4e3 has its CatchHandler @ 0310d5b0 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,4,4,in_x4);
                    /* try { // try from 0310d4e4 to 0320d50f has its CatchHandler @ 0310c418 */
                    /* catch() { ... } // from try @ 0310c8bc with catch @ 0310d4e8 */
                    /* catch() { ... } // from try @ 0310c970 with catch @ 0310d4ec */
                    /* catch() { ... } // from try @ 0310c8d0 with catch @ 0310d4f0 */
                    /* catch() { ... } // from try @ 0310d234 with catch @ 0310d4f4
                       catch() { ... } // from try @ 0310d250 with catch @ 0310d4f4 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,5,5,in_x4);
                    /* catch() { ... } // from try @ 0310d22c with catch @ 0310d4f8
                       catch() { ... } // from try @ 0310d244 with catch @ 0310d4f8 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,6,7,in_x4);
                    /* try { // try from 0310d510 to 0320d527 has its CatchHandler @ 0310d5a0 */
        Nekki_SF2_GUI_Common_MenuControls__LLNNPOHGDML(__this,OPHMGAKOJLP,7,6,in_x4);
        OPHMGAKOJLP = OPHMGAKOJLP + 1;
                    /* try { // try from 0310d528 to 0320d58f has its CatchHandler @ 0310c418 */
      } while (iVar1 != OPHMGAKOJLP);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICKIMMADNPK()  [RVA 0x300D364]
// Nekki.SF2.GUI.Common.MenuControls$$ICKIMMADNPK @ RVA 0x300D364

void Nekki_SF2_GUI_Common_MenuControls__ICKIMMADNPK
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  MethodInfo *in_x4;
  int OPHMGAKOJLP;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
    if (0 < iVar1) {
      OPHMGAKOJLP = 0;
      do {
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,0,0,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,1,1,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,2,2,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,3,3,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,4,4,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,5,5,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,6,7,in_x4);
        Nekki_SF2_GUI_Common_MenuControls__PNJANJEGPOE(__this,OPHMGAKOJLP,7,6,in_x4);
        OPHMGAKOJLP = OPHMGAKOJLP + 1;
      } while (iVar1 != OPHMGAKOJLP);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNAEFOJKLIM()  [RVA 0x300D1B4]
// Nekki.SF2.GUI.Common.MenuControls$$LNAEFOJKLIM @ RVA 0x300D1B4

void Nekki_SF2_GUI_Common_MenuControls__LNAEFOJKLIM
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_01;
  MethodInfo *in_x2;
  MethodInfo *in_x4;
  uint OPHMGAKOJLP;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565b8e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
    DAT_04565b8e = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
LAB_0310d32c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                    (__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0310d22c to 0320d233 has its CatchHandler @ 0310d4f8 */
  if (0 < (int)uVar3) {
                    /* try { // try from 0310d234 to 0320d243 has its CatchHandler @ 0310d4f4 */
                    /* try { // try from 0310d244 to 0320d24f has its CatchHandler @ 0310d4f8 */
                    /* try { // try from 0310d250 to 0320d253 has its CatchHandler @ 0310d4f4 */
    OPHMGAKOJLP = 0;
    do {
                    /* try { // try from 0310d254 to 0320d347 has its CatchHandler @ 0310c418 */
      __this_01 = (__this->fields).CBCDEIKGGDK;
      if (__this_01 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
      goto LAB_0310d32c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)local_60.fields._current ==
            (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
                          ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                           local_60.fields._current,OPHMGAKOJLP,in_x2);
        if (bVar2) {
          in_x2 = (MethodInfo *)(ulong)OPHMGAKOJLP;
          Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
                    (__this,2,OPHMGAKOJLP,
                     ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_Fields *)((long)pIVar1 + 0x10))
                     ->LCDNJBFAOHM,in_x4);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
      OPHMGAKOJLP = OPHMGAKOJLP + 1;
    } while (OPHMGAKOJLP != uVar3);
  }
  return;
}


// ===== private void IBCPKNBPEBE(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH, bool PGAPDIFCKDH = False)  [RVA 0x300F3AC]
// Nekki.SF2.GUI.Common.MenuControls$$IBCPKNBPEBE @ RVA 0x300F3AC

void Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,bool PGAPDIFCKDH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *pNVar3;
  OCOAGJDCJPL_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)AAJGEHHPMGH;
  if ((DAT_04565b8f & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8f = 1;
  }
  pNVar3 = (__this->fields).JOIIFEDGBGK;
  if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__GGOCJMKHICA
                      (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
    pNVar3 = (__this->fields).JOIIFEDGBGK;
    if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
      bVar2 = Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PNBPCMGLKEF
                        (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
      if ((!bVar2) && (bVar1)) {
        return;
      }
      pNVar3 = (__this->fields).JOIIFEDGBGK;
      if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
        Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__BFPFOFJOOIA
                  (pNVar3,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
        Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
        __this_00 = (__this->fields).KIHMKIEFOEI;
        if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
          if (!PGAPDIFCKDH) {
            return;
          }
          (__this->fields).ABBIIGOGPGF = 0.2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IsKeyUp(FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300F880]
// Nekki.SF2.GUI.Common.MenuControls$$IsKeyUp @ RVA 0x300F880

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar4;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_04;
  int OPHMGAKOJLP;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_05;
  
  if ((DAT_04565b90 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_EEGIDLHMAGJ_ACGEEEMJGPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_EEGIDLHMAGJ_JOGLEACDOPD__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_EEGIDLHMAGJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b90 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_EEGIDLHMAGJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    __this_05 = (__this->fields).ELOFOCJPGDO;
    pSVar4 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_05 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_05,pSVar4,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE(__this_01,method_00),
         !bVar2)) {
        __this_04 = (__this->fields).CBCDEIKGGDK;
        pSVar4 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_04 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310fa2c;
        method_01 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_04,pSVar4,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        bVar2 = false;
        if (__this_02 != (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
          __this_03 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current
                                ((MethodInfo *)0x0);
          if (__this_03 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0)
          goto LAB_0310fa2c;
          iVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                            (__this_03,(MethodInfo *)0x0);
          if (iVar3 < 1) {
            bVar2 = false;
          }
          else {
            OPHMGAKOJLP = 0;
            do {
              bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
                                (__this_02,OPHMGAKOJLP,method_01);
              if (bVar2) {
                return true;
              }
              bVar1 = iVar3 + -1 != OPHMGAKOJLP;
              OPHMGAKOJLP = OPHMGAKOJLP + 1;
              bVar2 = false;
            } while (bVar1);
          }
        }
      }
      else {
        bVar2 = true;
      }
      return bVar2;
    }
  }
LAB_0310fa2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void InvokeHintTouchUp(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN = 0)  [RVA 0x300FAD8]
// Nekki.SF2.GUI.Common.MenuControls$$InvokeHintTouchUp @ RVA 0x300FAD8

void Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  MethodInfo *in_x4;
  
  if ((DAT_04565b91 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_04565b91 = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AAJGEHHPMGH = ECNCJPCKOLN__IDDDPCFIALP(OHLKNCPBCBL,(MethodInfo *)0x0);
  if (AAJGEHHPMGH != -1) {
    Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO(__this,0,BMPJIDHGCBN,AAJGEHHPMGH,in_x4);
    return;
  }
  return;
}


// ===== public OCOAGJDCJPL get_OnKeyDown()  [RVA 0x300FB6C]
// Nekki.SF2.GUI.Common.MenuControls$$get_OnKeyDown @ RVA 0x300FB6C

OCOAGJDCJPL_o *
Nekki_SF2_GUI_Common_MenuControls__get_OnKeyDown
          (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  return (__this->fields).KIHMKIEFOEI;
}


// ===== private void JHIHLJOGBDD()  [RVA 0x300CD1C]
// Nekki.SF2.GUI.Common.MenuControls$$JHIHLJOGBDD @ RVA 0x300CD1C

void Nekki_SF2_GUI_Common_MenuControls__JHIHLJOGBDD
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b92 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    DAT_04565b92 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ELOFOCJPGDO;
  if (__this_00 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                  );
        return;
      }
      if ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current ==
          (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) break;
      bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__BHHIIBFHBFK
                        ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current
                         ,method_00);
      if (bVar2) {
        AAJGEHHPMGH = ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_Fields *)((long)pIVar1 + 0x10)
                      )->LCDNJBFAOHM;
        bVar2 = DANCCJHADOA__NBEOBEKPHMN(AAJGEHHPMGH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE(__this,1,0,AAJGEHHPMGH,bVar2,in_x5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void FOOJINDABEO(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH, float GKNIEGGEIFD)  [RVA 0x300F118]
// Nekki.SF2.GUI.Common.MenuControls$$FOOJINDABEO @ RVA 0x300F118

void Nekki_SF2_GUI_Common_MenuControls__FOOJINDABEO
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,float GKNIEGGEIFD,MethodInfo *method)

{
  EECMMJDOPDJ_o *__this_00;
  
  if ((DAT_04565b93 & 1) == 0) {
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b93 = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
  __this_00 = (__this->fields).ALALIGAEHDK;
  if (__this_00 != (EECMMJDOPDJ_o *)0x0) {
    KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__HCBAKFNPGDN
              ((KAMIOIFKHJP_T0__T1__T2__T3__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
               GKNIEGGEIFD,Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_HCBAKFNPGDN__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AGMBOMIMNAC()  [RVA 0x300CE90]
// Nekki.SF2.GUI.Common.MenuControls$$AGMBOMIMNAC @ RVA 0x300CE90

void Nekki_SF2_GUI_Common_MenuControls__AGMBOMIMNAC
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  Il2CppObject *pIVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_01;
  MethodInfo *in_x2;
  MethodInfo *in_x5;
  uint OPHMGAKOJLP;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565b94 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
    DAT_04565b94 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
LAB_0310d01c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                    (__this_00,(MethodInfo *)0x0);
  if (0 < (int)uVar3) {
    OPHMGAKOJLP = 0;
    do {
      __this_01 = (__this->fields).CBCDEIKGGDK;
      if (__this_01 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
      goto LAB_0310d01c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)local_60.fields._current ==
            (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
                          ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                           local_60.fields._current,OPHMGAKOJLP,in_x2);
        if (bVar2) {
          AAJGEHHPMGH = ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_Fields *)
                        ((long)pIVar1 + 0x10))->LCDNJBFAOHM;
          bVar2 = DANCCJHADOA__NBEOBEKPHMN(AAJGEHHPMGH,(MethodInfo *)0x0);
          in_x2 = (MethodInfo *)(ulong)OPHMGAKOJLP;
          Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE
                    (__this,2,OPHMGAKOJLP,AAJGEHHPMGH,bVar2,in_x5);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
      OPHMGAKOJLP = OPHMGAKOJLP + 1;
    } while (OPHMGAKOJLP != uVar3);
  }
  return;
}


// ===== public bool IsKeyDown(FBBNEILNOKK AAJGEHHPMGH, int BMPJIDHGCBN)  [RVA 0x300FB74]
// Nekki.SF2.GUI.Common.MenuControls$$IsKeyDown @ RVA 0x300FB74

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar2;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_03;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_04;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_04565b95 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IPGOBBOIIIH_APILIOKLILP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IPGOBBOIIIH_HNAFBBDFKDC__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_IPGOBBOIIIH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b95 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_IPGOBBOIIIH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    if (BMPJIDHGCBN == -1) {
      bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown(__this,AAJGEHHPMGH,pMVar3);
      return bVar1;
    }
    __this_04 = (__this->fields).ELOFOCJPGDO;
    pSVar2 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_04 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_04,pSVar2,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar1 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__BHHIIBFHBFK(__this_01,method_00),
         !bVar1)) {
        __this_03 = (__this->fields).CBCDEIKGGDK;
        pSVar2 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_03 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310fd08;
        pMVar3 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_03,pSVar2,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        if ((__this_02 == (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) ||
           (bVar1 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
                              (__this_02,BMPJIDHGCBN,pMVar3), !bVar1)) {
          return false;
        }
      }
      return true;
    }
  }
LAB_0310fd08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GPNPKOEHMGO(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x300F300]
// Nekki.SF2.GUI.Common.MenuControls$$GPNPKOEHMGO @ RVA 0x300F300

void Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  JPGJLKENNCC_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this_01;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)AAJGEHHPMGH;
  if ((DAT_04565b96 & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b96 = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
  __this_00 = (__this->fields).GMLEPHMBMPD;
  if (__this_00 != (JPGJLKENNCC_o *)0x0) {
    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
              ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_HCBAKFNPGDN__);
    __this_01 = (__this->fields).JOIIFEDGBGK;
    if (__this_01 != (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *)0x0) {
      Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__HMNIABGDCDL
                (__this_01,OPHMGAKOJLP,AAJGEHHPMGH,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MBACEABHPLC()  [RVA 0x300D054]
// Nekki.SF2.GUI.Common.MenuControls$$MBACEABHPLC @ RVA 0x300D054

void Nekki_SF2_GUI_Common_MenuControls__MBACEABHPLC
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b97 & 1) == 0) {
                    /* try { // try from 0310d078 to 0320d09f has its CatchHandler @ 0310d470 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_get_Current__
                );
                    /* try { // try from 0310d0a0 to 0320d22b has its CatchHandler @ 0310c418 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    DAT_04565b97 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ELOFOCJPGDO;
  if (__this_00 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                  );
        return;
      }
      if ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current ==
          (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) break;
      bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE
                        ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current
                         ,method_00);
      if (bVar2) {
        Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
                  (__this,1,0,
                   ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_Fields *)((long)pIVar1 + 0x10))->
                   LCDNJBFAOHM,in_x4);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public bool IsKeyUp(FBBNEILNOKK AAJGEHHPMGH, int BMPJIDHGCBN)  [RVA 0x300FE00]
// Nekki.SF2.GUI.Common.MenuControls$$IsKeyUp @ RVA 0x300FE00

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar2;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_03;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_04;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_04565b98 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_ACGEEEMJGPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_JOGLEACDOPD__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b98 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    if (BMPJIDHGCBN == -1) {
      bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp(__this,AAJGEHHPMGH,pMVar3);
      return bVar1;
    }
    __this_04 = (__this->fields).ELOFOCJPGDO;
    pSVar2 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_04 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_04,pSVar2,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar1 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE(__this_01,method_00),
         !bVar1)) {
        __this_03 = (__this->fields).CBCDEIKGGDK;
        pSVar2 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_03 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310ff94;
        pMVar3 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_03,pSVar2,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        if ((__this_02 == (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) ||
           (bVar1 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
                              (__this_02,BMPJIDHGCBN,pMVar3), !bVar1)) {
          return false;
        }
      }
      return true;
    }
  }
LAB_0310ff94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJNEBABOEIH(ADINBPPGIOA NAIJBCMHBFK, int OPHMGAKOJLP, JCLBGAAFKGE AAJGEHHPMGH)  [RVA 0x300F230]
// Nekki.SF2.GUI.Common.MenuControls$$HJNEBABOEIH @ RVA 0x300F230

void Nekki_SF2_GUI_Common_MenuControls__HJNEBABOEIH
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t NAIJBCMHBFK,int32_t OPHMGAKOJLP,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  CEAGEFMDAAN_o *__this_00;
  
  if ((DAT_04565b99 & 1) == 0) {
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_HCBAKFNPGDN__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b99 = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = NAIJBCMHBFK;
  __this_00 = (__this->fields).MODIIOJEMLE;
  if (__this_00 != (CEAGEFMDAAN_o *)0x0) {
    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__HCBAKFNPGDN
              ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,NAIJBCMHBFK,OPHMGAKOJLP,AAJGEHHPMGH,
               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_HCBAKFNPGDN__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EECMMJDOPDJ get_OnAxisDown()  [RVA 0x300FFA0]
// Nekki.SF2.GUI.Common.MenuControls$$get_OnAxisDown @ RVA 0x300FFA0

EECMMJDOPDJ_o *
Nekki_SF2_GUI_Common_MenuControls__get_OnAxisDown
          (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  return (__this->fields).ALALIGAEHDK;
}


// ===== public CEAGEFMDAAN get_OnAxisUp()  [RVA 0x300FFA8]
// Nekki.SF2.GUI.Common.MenuControls$$get_OnAxisUp @ RVA 0x300FFA8

CEAGEFMDAAN_o *
Nekki_SF2_GUI_Common_MenuControls__get_OnAxisUp
          (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  return (__this->fields).MODIIOJEMLE;
}


// ===== public void InvokeHintTouchDown(MIBHAJBEMIK OHLKNCPBCBL, int BMPJIDHGCBN = 0)  [RVA 0x300FFB0]
// Nekki.SF2.GUI.Common.MenuControls$$InvokeHintTouchDown @ RVA 0x300FFB0

void Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t OHLKNCPBCBL,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  int32_t AAJGEHHPMGH;
  MethodInfo *in_x5;
  
  if ((DAT_04565b9a & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    DAT_04565b9a = 1;
  }
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AAJGEHHPMGH = ECNCJPCKOLN__IDDDPCFIALP(OHLKNCPBCBL,(MethodInfo *)0x0);
  if (AAJGEHHPMGH != -1) {
    Nekki_SF2_GUI_Common_MenuControls__IBCPKNBPEBE(__this,0,BMPJIDHGCBN,AAJGEHHPMGH,false,in_x5);
    return;
  }
  return;
}


// ===== private static void GIENGNEGHPJ()  [RVA 0x300CB48]
// Nekki.SF2.GUI.Common.MenuControls$$GIENGNEGHPJ @ RVA 0x300CB48

void Nekki_SF2_GUI_Common_MenuControls__GIENGNEGHPJ(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  
  if ((DAT_04565b9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<MenuControls>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15554/*"[MenuControls]"*/);
    DAT_04565b9b = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15554/*"[MenuControls]"*/,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_GUI_Common_MenuControls_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<MenuControls>__);
      Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields,pNVar2);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

