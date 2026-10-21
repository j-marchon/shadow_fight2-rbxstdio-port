// TypeDefIndex 1610
// Namespace: 
// public class ClanLogoImage : MonoBehaviour
// Fields:
//   private ResolutionImage _baseLogoImage; // 0x20
//   private ResolutionImage _backgroundImage; // 0x28
//   private ResolutionImage _armsImage; // 0x30
//   private ResolutionImage _layerLevelBottom; // 0x38
//   private ResolutionImage _layerLevelTop; // 0x40
//   private LabelAlias _levelLabel; // 0x48
//   private int GPCPMFCFAMG; // 0x50
//   private string BJFFFHJKHIF; // 0x58
//   private Nullable<Color> OPPFHPEPLOO; // 0x60
//   private string[] HACKNLKPIPL; // 0x78

// ===== private void FKFPKOGCLFP(string NEJHIEOHMCF)  [RVA 0x31B7AF4]
// ClanLogoImage$$FKFPKOGCLFP @ RVA 0x31B7AF4

void ClanLogoImage__FKFPKOGCLFP
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_array *pSVar6;
  JMDPBFOCHHP_o *pJVar7;
  System_Collections_Generic_List_string__o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *__this_00;
  Il2CppObject *pIVar10;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar11;
  System_String_o **ppSVar12;
  System_String_array **ppSVar13;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar14;
  int iVar15;
  ulong uVar16;
  
  if ((DAT_04566bc3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__);
    FUN_01bab630(&StringLiteral_4392/*"ClanLogo.default_icon"*/);
    DAT_04566bc3 = 1;
  }
  ppSVar12 = &(__this->fields).BJFFFHJKHIF;
  bVar2 = System_String__op_Equality(*ppSVar12,NEJHIEOHMCF,(MethodInfo *)0x0);
  if (bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7ad8 with catch @ 032b7b94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b7ac8 with catch @ 032b7b98
                        */
    return;
  }
  (__this->fields).BJFFFHJKHIF = NEJHIEOHMCF;
  thunk_FUN_01c20e04(ppSVar12,NEJHIEOHMCF);
  ppSVar13 = &(__this->fields).HACKNLKPIPL;
                    /* try { // try from 032b7bb0 to 033b7bb3 has its CatchHandler @ 032b7bdc */
  *ppSVar13 = (System_String_array *)0x0;
                    /* try { // try from 032b7bb4 to 033b7beb has its CatchHandler @ 032b7a30 */
  thunk_FUN_01c20e04(ppSVar13,0);
  pNVar4 = (__this->fields)._baseLogoImage;
  (__this->fields).GPCPMFCFAMG = -1;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b7bb0 with catch @ 032b7bdc */
    Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._backgroundImage;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b7bec to 033b7bf3 has its CatchHandler @ 032b7c08 */
      pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
                    /* try { // try from 032b7bf4 to 033b7bff has its CatchHandler @ 032b7a30 */
      Util__IHPDCBOFHPA(pUVar5,false,(MethodInfo *)0x0);
                    /* try { // try from 032b7c00 to 033b7c07 has its CatchHandler @ 032b7c08 */
      pNVar4 = (__this->fields)._armsImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b7bec with catch @ 032b7c08
                       catch(type#2 @ 00000000) { ... } // from try @ 032b7c00 with catch @ 032b7c08
                        */
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar5,false,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(NEJHIEOHMCF,(MethodInfo *)0x0);
        if (!bVar2) {
          if (NEJHIEOHMCF == (System_String_o *)0x0) goto LAB_032b7ec4;
          pSVar6 = System_String__Split(NEJHIEOHMCF,0x2c,0,(MethodInfo *)0x0);
          *ppSVar13 = pSVar6;
          thunk_FUN_01c20e04(ppSVar13,pSVar6);
          if (*ppSVar13 == (System_String_array *)0x0) goto LAB_032b7ec4;
          if ((*ppSVar13)->max_length != 0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar7 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (((pJVar7 == (JMDPBFOCHHP_o *)0x0) ||
                (pJVar11 = (pJVar7->fields)._LGFNDLOCGPB_k__BackingField,
                pJVar11 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) ||
               (pSVar6 = *ppSVar13, pSVar6 == (System_String_array *)0x0)) goto LAB_032b7ec4;
            if ((int)pSVar6->max_length == 0) {
LAB_032b7ec8:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pJVar14 = (pJVar11->fields).OOFDKPAOGFA;
            iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[0],0,(MethodInfo *)0x0);
            if (-1 < iVar3) {
              if ((pJVar14 == (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0) ||
                 (pSVar8 = (pJVar14->fields).DOALOOOJNPD,
                 pSVar8 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_032b7ec4;
              if (iVar3 < (pSVar8->fields)._size) {
                pNVar4 = (__this->fields)._baseLogoImage;
                pSVar9 = (System_String_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar3,
                                    Method_System_Collections_Generic_List<string>_get_Item__);
                if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar9,(MethodInfo *)0x0);
                  pSVar6 = *ppSVar13;
                  if (pSVar6 != (System_String_array *)0x0) {
                    uVar16 = 0;
                    do {
                      uVar1 = (uint)pSVar6->max_length;
                      if ((long)(int)uVar1 <= (long)uVar16) {
                        return;
                      }
                      if (uVar1 <= uVar16) goto LAB_032b7ec8;
                    /* try { // try from 032b7d28 to 033b7e5b has its CatchHandler @ 032b7d28
                       catch() { ... } // from try @ 032b7d28 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b7ff4 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b8058 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b80a4 with catch @ 032b7d28
                       catch() { ... } // from try @ 032b811c with catch @ 032b7d28 */
                      iVar3 = PCOEHCPGBBG__JBGCINPPLAC(pSVar6->m_Items[uVar16],0,(MethodInfo *)0x0);
                      if (-1 < iVar3) {
                        iVar15 = (int)uVar16;
                        if (iVar15 == 2) {
                          __this_00 = (pJVar14->fields).DFIBIHHGIPG;
                          if (__this_00 ==
                              (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)
                          break;
                          if (iVar3 < (__this_00->fields)._size) {
                            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,iVar3,
                                                 Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                                                );
                            if ((pIVar10 == (Il2CppObject *)0x0) ||
                               (pNVar4 = (__this->fields)._backgroundImage,
                               pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) break;
                            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                                      (*(undefined4 *)&pIVar10[1].klass,
                                       *(undefined4 *)((long)&pIVar10[1].klass + 4),
                                       *(undefined4 *)&pIVar10[1].monitor,
                                       *(undefined4 *)((long)&pIVar10[1].monitor + 4),pNVar4,
                                       (pNVar4->klass->vtable)._23_set_color.method);
                            __this_00 = (pJVar14->fields).DFIBIHHGIPG;
                            if (__this_00 ==
                                (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0)
                            break;
                          }
                          if (iVar3 < (__this_00->fields)._size) {
                            pIVar10 = System_Collections_Generic_List<object>__get_Item
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_00,iVar3,
                                                 Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_get_Item__
                                                );
                            if ((pIVar10 == (Il2CppObject *)0x0) ||
                               (pNVar4 = (__this->fields)._armsImage,
                               pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) break;
                            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                                      (*(undefined4 *)&pIVar10[2].klass,
                                       *(undefined4 *)((long)&pIVar10[2].klass + 4),
                                       *(undefined4 *)&pIVar10[2].monitor,
                                       *(undefined4 *)((long)&pIVar10[2].monitor + 4),pNVar4,
                                       (pNVar4->klass->vtable)._23_set_color.method);
                          }
                        }
                        else if (iVar15 == 1) {
                          pSVar8 = (pJVar14->fields).KCDBFFCLCOG;
                          if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                          if (iVar3 < (pSVar8->fields)._size) {
                            pNVar4 = (__this->fields)._armsImage;
                            if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                            pUVar5 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0)
                            ;
                            Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
                            pSVar8 = (pJVar14->fields).KCDBFFCLCOG;
                    /* try { // try from 032b7e5c to 033b7e63 has its CatchHandler @ 032b8090 */
                            if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                            pNVar4 = (__this->fields)._armsImage;
LAB_032b7e64:
                            pSVar9 = (System_String_o *)
                                     System_Collections_Generic_List<object>__get_Item
                                               ((System_Collections_Generic_List_object__o *)pSVar8,
                                                iVar3,
                                                Method_System_Collections_Generic_List<string>_get_Item__
                                               );
                            if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) break;
                            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                      (pNVar4,pSVar9,(MethodInfo *)0x0);
                          }
                        }
                        else if (iVar15 == 0) {
                          pSVar8 = (pJVar14->fields).MHLCLANFAAO;
                          if (pSVar8 == (System_Collections_Generic_List_string__o *)0x0) break;
                          if (iVar3 < (pSVar8->fields)._size) {
                            pNVar4 = (__this->fields)._backgroundImage;
                            if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                              pUVar5 = UnityEngine_Component__get_gameObject
                                                 ((UnityEngine_Component_o *)pNVar4,
                                                  (MethodInfo *)0x0);
                              Util__IHPDCBOFHPA(pUVar5,true,(MethodInfo *)0x0);
                              pSVar8 = (pJVar14->fields).MHLCLANFAAO;
                              if (pSVar8 != (System_Collections_Generic_List_string__o *)0x0) {
                                pNVar4 = (__this->fields)._backgroundImage;
                                goto LAB_032b7e64;
                              }
                            }
                            break;
                          }
                        }
                      }
                      pSVar6 = *ppSVar13;
                      uVar16 = uVar16 + 1;
                    } while (pSVar6 != (System_String_array *)0x0);
                  }
                }
                goto LAB_032b7ec4;
              }
            }
          }
        }
                    /* try { // try from 032b7e94 to 033b7e97 has its CatchHandler @ 032b807c */
        pNVar4 = (__this->fields)._baseLogoImage;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b7eb8 to 033b7ebf has its CatchHandler @ 032b8070 */
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,StringLiteral_4392/*"ClanLogo.default_icon"*/,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
LAB_032b7ec4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NeedUpdate(string NEJHIEOHMCF, int OHLDDIANEPE = 0)  [RVA 0x31B7ECC]
// ClanLogoImage$$NeedUpdate @ RVA 0x31B7ECC

bool ClanLogoImage__NeedUpdate
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((__this->fields).GPCPMFCFAMG == OHLDDIANEPE) {
                    /* try { // try from 032b7ee8 to 033b7eeb has its CatchHandler @ 032b8078 */
    iVar2 = System_String__Compare((__this->fields).BJFFFHJKHIF,NEJHIEOHMCF,5,(MethodInfo *)0x0);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
                    /* try { // try from 032b7efc to 033b7f0b has its CatchHandler @ 032b806c */
  return bVar1;
}


// ===== public void Refresh(string NEJHIEOHMCF, int OHLDDIANEPE = 0)  [RVA 0x31B7F04]
// ClanLogoImage$$Refresh @ RVA 0x31B7F04

void ClanLogoImage__Refresh
               (ClanLogoImage_o *__this,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               MethodInfo *method)

{
  System_Nullable_Color__o *pSVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  MethodInfo *method_00;
  System_Nullable_Color__o *pSVar3;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  UnityEngine_Color_o value;
  System_Nullable_Color__Fields local_48;
  
  method_00 = (MethodInfo *)(ulong)(uint)OHLDDIANEPE;
  if ((DAT_04566bc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    DAT_04566bc4 = 1;
  }
  pSVar3 = &(__this->fields).OPPFHPEPLOO;
  if ((pSVar3->fields).hasValue == false) {
    pNVar2 = (__this->fields)._layerLevelBottom;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    value.fields.r =
         (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                   (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
    local_48.hasValue = false;
    local_48._1_3_ = 0;
    local_48.value.fields.r = 0.0;
    local_48.value.fields.g = 0.0;
    local_48.value.fields.b = 0.0;
    local_48.value.fields.a = 0.0;
    value.fields.g = (float)in_s1;
    value.fields.a = (float)in_s3;
    value.fields.b = (float)in_s2;
    System_Nullable<Color>___ctor
              ((System_Nullable_Color__o *)&local_48,value,Method_System_Nullable<Color>__ctor__);
    (__this->fields).OPPFHPEPLOO.fields.value.fields.a = local_48.value.fields.a;
    pSVar1 = &(__this->fields).OPPFHPEPLOO;
    (pSVar1->fields).value.fields.g = local_48.value.fields.g;
    (pSVar1->fields).value.fields.b = local_48.value.fields.b;
    (pSVar3->fields).hasValue = local_48.hasValue;
    *(undefined3 *)&(pSVar3->fields).field_0x1 = local_48._1_3_;
    (pSVar3->fields).value.fields.r = local_48.value.fields.r;
  }
  ClanLogoImage__FKFPKOGCLFP(__this,NEJHIEOHMCF,method_00);
  ClanLogoImage__BNLMMGGEPAN(__this,OHLDDIANEPE,method_00);
  return;
}


// ===== private void BNLMMGGEPAN(int OHLDDIANEPE)  [RVA 0x31B7FCC]
// ClanLogoImage$$BNLMMGGEPAN @ RVA 0x31B7FCC

void ClanLogoImage__BNLMMGGEPAN(ClanLogoImage_o *__this,int32_t OHLDDIANEPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_array *pSVar6;
  Il2CppMethodPointer pIVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  int32_t local_24;
  
                    /* try { // try from 032b7fe4 to 033b7ff3 has its CatchHandler @ 032b8068 */
  local_24 = OHLDDIANEPE;
  if ((DAT_04566bc5 & 1) == 0) {
                    /* try { // try from 032b7ff4 to 033b801b has its CatchHandler @ 032b7d28 */
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&StringLiteral_4390/*"ClanLogo.clanlvl_1"*/);
    FUN_01bab630(&StringLiteral_4391/*"ClanLogo.clanlvl_2"*/);
    DAT_04566bc5 = 1;
  }
                    /* try { // try from 032b801c to 033b801f has its CatchHandler @ 032b808c */
                    /* try { // try from 032b8024 to 033b8027 has its CatchHandler @ 032b8088 */
  if ((OHLDDIANEPE < 1) || ((__this->fields).HACKNLKPIPL == (System_String_array *)0x0)) {
    pNVar1 = (__this->fields)._layerLevelBottom;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._layerLevelTop;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b80a0 with catch @ 032b8104 */
        pNVar3 = (__this->fields)._levelLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 032b8114 to 033b811b has its CatchHandler @ 032b8130 */
                    /* try { // try from 032b811c to 033b8127 has its CatchHandler @ 032b7d28 */
          Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
LAB_032b81dc:
          (__this->fields).GPCPMFCFAMG = OHLDDIANEPE;
          return;
        }
      }
    }
  }
  else {
                    /* try { // try from 032b802c to 033b802f has its CatchHandler @ 032b8084 */
    pNVar1 = (__this->fields)._layerLevelBottom;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b8034 to 033b8037 has its CatchHandler @ 032b8080 */
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 032b803c to 033b803f has its CatchHandler @ 032b8074 */
                    /* try { // try from 032b8044 to 033b8047 has its CatchHandler @ 032b8064 */
      Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._layerLevelTop;
                    /* try { // try from 032b804c to 033b804f has its CatchHandler @ 032b8060 */
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b8054 to 033b8057 has its CatchHandler @ 032b805c */
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 032b8058 to 033b809f has its CatchHandler @ 032b7d28 */
                    /* catch() { ... } // from try @ 032b8054 with catch @ 032b805c */
                    /* catch() { ... } // from try @ 032b804c with catch @ 032b8060 */
        Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b8044 with catch @ 032b8064 */
        pNVar3 = (__this->fields)._levelLabel;
                    /* catch() { ... } // from try @ 032b7fe4 with catch @ 032b8068 */
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 032b7efc with catch @ 032b806c */
                    /* catch() { ... } // from try @ 032b7eb8 with catch @ 032b8070 */
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b803c with catch @ 032b8074 */
                    /* catch() { ... } // from try @ 032b7ee8 with catch @ 032b8078 */
                    /* catch() { ... } // from try @ 032b7e94 with catch @ 032b807c */
          Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b8034 with catch @ 032b8080 */
                    /* catch() { ... } // from try @ 032b802c with catch @ 032b8084 */
                    /* catch() { ... } // from try @ 032b8024 with catch @ 032b8088 */
          if ((__this->fields).GPCPMFCFAMG == OHLDDIANEPE) goto LAB_032b81dc;
                    /* catch() { ... } // from try @ 032b801c with catch @ 032b808c */
          pSVar6 = (__this->fields).HACKNLKPIPL;
                    /* catch() { ... } // from try @ 032b7e5c with catch @ 032b8090 */
          if (pSVar6 != (System_String_array *)0x0) {
            pNVar1 = (__this->fields)._layerLevelBottom;
                    /* try { // try from 032b80a0 to 033b80a3 has its CatchHandler @ 032b8104 */
            if ((int)pSVar6->max_length < 3) {
                    /* try { // try from 032b80a4 to 033b8113 has its CatchHandler @ 032b7d28 */
              UVar12 = System_Nullable<Color>__get_Value
                                 (&(__this->fields).OPPFHPEPLOO,
                                  Method_System_Nullable<Color>_get_Value__);
              fVar11 = UVar12.fields.a;
              fVar10 = UVar12.fields.b;
              fVar9 = UVar12.fields.g;
              fVar8 = UVar12.fields.r;
              if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032b81f0;
              pIVar7 = (pNVar1->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar1->klass->vtable)._23_set_color.method;
            }
            else {
              if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032b81f0;
                    /* try { // try from 032b8128 to 033b812f has its CatchHandler @ 032b8130 */
              fVar8 = 0.0;
                    /* catch() { ... } // from try @ 032b8114 with catch @ 032b8130
                       catch() { ... } // from try @ 032b8128 with catch @ 032b8130 */
              fVar9 = 0.0;
              fVar10 = 0.0;
              pIVar7 = (pNVar1->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar1->klass->vtable)._23_set_color.method;
              fVar11 = 1.0;
            }
            (*pIVar7)(fVar8,fVar9,fVar10,fVar11,pNVar1,pMVar5);
            pNVar1 = (__this->fields)._layerLevelBottom;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        (pNVar1,StringLiteral_4391/*"ClanLogo.clanlvl_2"*/,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._layerLevelTop;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (pNVar1,StringLiteral_4390/*"ClanLogo.clanlvl_1"*/,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._levelLabel;
                if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                            (0,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method);
                  pNVar3 = (__this->fields)._levelLabel;
                  pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                              (pNVar3,pSVar4,(pNVar3->klass->vtable)._75_set_text.method);
                    OHLDDIANEPE = local_24;
                    goto LAB_032b81dc;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032b81f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31B81F4]
// ClanLogoImage$$.ctor @ RVA 0x31B81F4

void ClanLogoImage___ctor(ClanLogoImage_o *__this,MethodInfo *method)

{
  (__this->fields).GPCPMFCFAMG = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

