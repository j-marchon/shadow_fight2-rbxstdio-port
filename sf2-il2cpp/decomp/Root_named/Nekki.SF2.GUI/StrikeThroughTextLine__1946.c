// TypeDefIndex 1946
// Namespace: Nekki.SF2.GUI
// [ExecuteAlways]
// public class StrikeThroughTextLine : MaskableGraphic
// Fields:
//   private const float OHPLGIPAFNO = 0.15;
//   private const float NHANHLJJKOJ = 4;
//   private static readonly Color GHJIFCNJDKD; // 0x0
//   private List<StrikeThroughTextLine.NLGMBKIAOPD> <KHPCAICPJCK>k__BackingField; // 0xD8
//   private List<StrikeThroughTextLine.NLGMBKIAOPD> <IAGANEPIJNF>k__BackingField; // 0xE0
//   private bool IEIMMJMMGHP; // 0xE8

// ===== public void ParseText(ref string JLNPKGGFFDD, Color HCPAAIJOOKK)  [RVA 0x3270D2C]
// Nekki.SF2.GUI.StrikeThroughTextLine$$ParseText @ RVA 0x3270D2C

void Nekki_SF2_GUI_StrikeThroughTextLine__ParseText
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,System_String_o **JLNPKGGFFDD,
               UnityEngine_Color_o HCPAAIJOOKK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = (MethodInfo *)JLNPKGGFFDD;
  if ((DAT_04567227 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_GetEnumerator__);
    DAT_04567227 = 1;
    method_00 = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_StrikeThroughTextLine__Clear(__this,method_00);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*JLNPKGGFFDD,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = AEGOLGIJEBI__GOGBOEBJPEL(JLNPKGGFFDD,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_StrikeThroughTextLine__KMIKLELCKNI
                (__this,(AEGOLGIJEBI_AOIPPHGJEND_o *)local_58.fields._current,HCPAAIJOOKK,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,
               Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_Dispose__)
    ;
  }
  return;
}


// ===== public bool HasSomethingToRender()  [RVA 0x32712A4]
// Nekki.SF2.GUI.StrikeThroughTextLine$$HasSomethingToRender @ RVA 0x32712A4

bool Nekki_SF2_GUI_StrikeThroughTextLine__HasSomethingToRender
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567228 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
    DAT_04567228 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).super.m_Corners,
                     Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
  if (bVar1) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)
                       (__this->fields)._KHPCAICPJCK_k__BackingField,
                       Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3271310]
// Nekki.SF2.GUI.StrikeThroughTextLine$$.ctor @ RVA 0x3271310

void Nekki_SF2_GUI_StrikeThroughTextLine___ctor
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_array *__this_00;
  UnityEngine_Vector3_array **ppUVar1;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *__this_01;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567229 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>__ctor__)
    ;
    FUN_01bab630(&System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_TypeInfo);
    DAT_04567229 = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Vector3_array *)
              thunk_FUN_01bda818(System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_TypeInfo
                                 ,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>__ctor__);
  ppUVar1 = &(__this->fields).super.m_Corners;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>__ctor__);
  ppSVar2 = &(__this->fields)._KHPCAICPJCK_k__BackingField;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_UI_MaskableGraphic___ctor
            ((UnityEngine_UI_MaskableGraphic_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public List<StrikeThroughTextLine.NLGMBKIAOPD> get_RenderedLines()  [RVA 0x32713BC]
// Nekki.SF2.GUI.StrikeThroughTextLine$$get_RenderedLines @ RVA 0x32713BC

System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *
Nekki_SF2_GUI_StrikeThroughTextLine__get_RenderedLines
          (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  return (__this->fields)._KHPCAICPJCK_k__BackingField;
}


// ===== public List<StrikeThroughTextLine.NLGMBKIAOPD> get_PrototypeLines()  [RVA 0x32713C4]
// Nekki.SF2.GUI.StrikeThroughTextLine$$get_PrototypeLines @ RVA 0x32713C4

System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *
Nekki_SF2_GUI_StrikeThroughTextLine__get_PrototypeLines
          (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)
         (__this->fields).super.m_Corners;
}


// ===== public static StrikeThroughTextLine Instantiate(Transform JJHEGPBBMLG)  [RVA 0x32713CC]
// Nekki.SF2.GUI.StrikeThroughTextLine$$Instantiate @ RVA 0x32713CC

Nekki_SF2_GUI_StrikeThroughTextLine_o *
Nekki_SF2_GUI_StrikeThroughTextLine__Instantiate
          (UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456722a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<StrikeThroughTextLine>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_12467/*"StrikeThroughTextLine"*/);
    DAT_0456722a = 1;
    method = extraout_x1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(__this,StringLiteral_12467/*"StrikeThroughTextLine"*/,(MethodInfo *)0x0);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent<object>
              (__this,Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    pNVar1 = (Nekki_SF2_GUI_StrikeThroughTextLine_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<StrikeThroughTextLine>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ComputePositions(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x32714A4]
// Nekki.SF2.GUI.StrikeThroughTextLine$$ComputePositions @ RVA 0x32714A4

void Nekki_SF2_GUI_StrikeThroughTextLine__ComputePositions
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  int32_t FEDCJPALCBN;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t index;
  UnityEngine_Vector3_array *pUVar6;
  Il2CppObject *pIVar7;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar8;
  Il2CppObject *pIVar9;
  Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *pNVar10;
  System_Array_o *array;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *pSVar11;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar12;
  Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *pNVar13;
  int iVar14;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_01;
  int iVar15;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456722b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Clear__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    DAT_0456722b = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
  *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 1;
  if (pSVar11 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
    uVar1 = (pSVar11->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar11->fields)._size = 0;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (0 < (int)uVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    if (((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
        (pSVar12 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
        pSVar12 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) &&
       (pUVar6 = (__this->fields).super.m_Corners, pUVar6 != (UnityEngine_Vector3_array *)0x0)) {
      if ((pSVar12->fields)._size < 4) {
        iVar15 = (int)pUVar6->max_length;
        iVar14 = *(int *)((long)&pUVar6->max_length + 4);
        *(undefined4 *)&pUVar6->max_length = 0;
        *(int *)((long)&pUVar6->max_length + 4) = iVar14 + 1;
        if (0 < iVar15) {
          array = (System_Array_o *)pUVar6->bounds;
LAB_0337193c:
          System_Array__Clear(array,0,iVar15,(MethodInfo *)0x0);
        }
      }
      else {
        iVar15 = (int)pUVar6->max_length;
        if (0 < iVar15) {
          iVar14 = 0;
          do {
            if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
            __this_01 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pUVar6,iVar14,
                                Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_get_Item__
                               );
            if (((pIVar7 == (Il2CppObject *)0x0) ||
                (__this_01 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) ||
               (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
               __this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)__this_01,
                                      *(int32_t *)((long)&pIVar7[1].klass + 4),
                                      (MethodInfo_26E4ADC *)
                                      Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                     ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
            goto LAB_03371a18;
            bVar4 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
            if (bVar4) {
              pSVar12 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
              if (pSVar12 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)
              goto LAB_03371a18;
              iVar2 = (pSVar12->fields)._size;
              iVar5 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
              if (iVar2 <= iVar5) {
                pUVar6 = (__this->fields).super.m_Corners;
                if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
                iVar15 = (int)pUVar6->max_length;
                iVar14 = *(int *)((long)&pUVar6->max_length + 4);
                *(undefined4 *)&pUVar6->max_length = 0;
                *(int *)((long)&pUVar6->max_length + 4) = iVar14 + 1;
                if (iVar15 < 1) {
                  return;
                }
                array = (System_Array_o *)pUVar6->bounds;
                goto LAB_0337193c;
              }
            }
            pUVar6 = (__this->fields).super.m_Corners;
            iVar14 = iVar14 + 1;
          } while (iVar15 != iVar14);
          if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto LAB_03371a18;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pUVar6,
                   Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                                 ), pIVar7 = local_80.fields._current, bVar4) {
          if ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = OMANDMDCGMF__CCDHGNJODKP
                            ((MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
                             ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                             ((long)local_80.fields._current + 0x10))->BGPIAJBHFEM,(MethodInfo *)0x0
                            );
          method_00 = (MethodInfo *)0x0;
          index = OMANDMDCGMF__CCDHGNJODKP
                            ((MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
                             ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                             ((long)pIVar7 + 0x10))->CFGIDIGNIOL,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
          if (iVar5 == index) {
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] =
                   (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1,pIVar7);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,pIVar7,
                         (MethodInfo_26E4DAC *)method_00);
            }
          }
          else {
            pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
            if (pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            FEDCJPALCBN = ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)
                          ((long)pIVar7 + 0x10))->BGPIAJBHFEM;
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar8,iVar5,
                                Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                               );
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                 FEDCJPALCBN,*(int32_t *)((long)&pIVar9[1].klass + 4),in_x3);
            lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] = pNVar10;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,
                         (Il2CppObject *)pNVar10,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
            iVar15 = iVar5 + 1;
            bVar4 = pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0;
            if (iVar15 < index) {
              do {
                if (bVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar15,
                                    Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                                   );
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
                if (pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                iVar5 = *(int32_t *)&pIVar9[1].klass;
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar8,iVar15,
                                    Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                                   );
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                    ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                     iVar5,*(int32_t *)((long)&pIVar9[1].klass + 4),in_x3);
                lVar3 = 
                Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
                pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
                if (pSVar11 ==
                    (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar13 = (pSVar11->fields)._items;
                (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (pSVar11->fields)._size;
                if (uVar1 < (uint)pNVar13->max_length) {
                  (pSVar11->fields)._size = uVar1 + 1;
                  pNVar13->m_Items[(int)uVar1] = pNVar10;
                  thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar11,
                             (Il2CppObject *)pNVar10,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                pSVar8 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
                iVar15 = iVar15 + 1;
                bVar4 = pSVar8 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0;
              } while (index != iVar15);
            }
            if (bVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar8,index,
                                Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__
                               );
            if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_Fields *)((long)pIVar7 + 0x10)
                    )->CFGIDIGNIOL;
            method_00 = (MethodInfo *)(ulong)uVar1;
            pNVar10 = Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__MOKLOIFMABD
                                ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)pIVar7,
                                 *(int32_t *)&pIVar9[1].klass,uVar1,in_x3);
            lVar3 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
            pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
            if (pSVar11 ==
                (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pNVar13 = (pSVar11->fields)._items;
            (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
            if (pNVar13 == (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar11->fields)._size;
            if (uVar1 < (uint)pNVar13->max_length) {
              (pSVar11->fields)._size = uVar1 + 1;
              pNVar13->m_Items[(int)uVar1] = pNVar10;
              thunk_FUN_01c20e04(pNVar13->m_Items + (int)uVar1);
            }
            else {
              method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar11,
                         (Il2CppObject *)pNVar10,(MethodInfo_26E4DAC *)method_00);
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                  );
        pSVar11 = (__this->fields)._KHPCAICPJCK_k__BackingField;
        if (pSVar11 == (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0)
        goto LAB_03371a18;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar11,
                   Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                  );
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                                 ), bVar4) {
          if ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD__LHPFLCMLFMF
                    ((Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_o *)local_80.fields._current,
                     MMEECJEKHGB,method_00);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                  );
      }
      return;
    }
  }
LAB_03371a18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x327203C]
// Nekki.SF2.GUI.StrikeThroughTextLine$$Update @ RVA 0x327203C

void Nekki_SF2_GUI_StrikeThroughTextLine__Update
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_RectTransform_o *thiz;
  UnityEngine_RectTransform_o *that;
  Nekki_SF2_GUI_StrikeThroughTextLine_c *pNVar2;
  
  if ((DAT_0456722c & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456722c = 1;
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(pUVar1,(MethodInfo *)0x0);
    thiz = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      that = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
      if (that == (UnityEngine_RectTransform_o *)0x0) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      else if (that->klass != UnityEngine_RectTransform_TypeInfo) {
        that = (UnityEngine_RectTransform_o *)0x0;
      }
      UnityEngine_TransformExtensions__ImposeOn(thiz,that,(MethodInfo *)0x0);
      if (*(char *)&(__this->fields)._IAGANEPIJNF_k__BackingField == '\0') {
        return;
      }
      pNVar2 = __this->klass;
      *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 0;
      (*(pNVar2->vtable)._28_SetVerticesDirty.methodPtr)
                (__this,(pNVar2->vtable)._28_SetVerticesDirty.method);
                    /* WARNING: Could not recover jumptable at 0x03372110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._27_SetLayoutDirty.methodPtr)
                (__this,(__this->klass->vtable)._27_SetLayoutDirty.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KMIKLELCKNI(AEGOLGIJEBI.AOIPPHGJEND ADOIANOKIIK, Color HCPAAIJOOKK)  [RVA 0x3270F5C]
// Nekki.SF2.GUI.StrikeThroughTextLine$$KMIKLELCKNI @ RVA 0x3270F5C

void Nekki_SF2_GUI_StrikeThroughTextLine__KMIKLELCKNI
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,AEGOLGIJEBI_AOIPPHGJEND_o *ADOIANOKIIK
               ,UnityEngine_Color_o HCPAAIJOOKK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar9;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar10;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar11;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar12;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar13;
  Il2CppObject *__this_00;
  Nekki_SF2_GUI_StrikeThroughTextLine_StaticFields *pNVar14;
  Il2CppArrayBounds *pIVar15;
  UnityEngine_Vector3_array *__this_01;
  System_String_o *pSVar16;
  Il2CppClass *pIVar17;
  float local_8c;
  float local_88 [2];
  UnityEngine_Color_Fields local_80;
  
  if ((DAT_0456722d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    FUN_01bab630(&StringLiteral_19977/*"offsety"*/);
    FUN_01bab630(&StringLiteral_21578/*"trail"*/);
    FUN_01bab630(&StringLiteral_21462/*"textcolor"*/);
    FUN_01bab630(&StringLiteral_17122/*"color"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_21497/*"thickness"*/);
    DAT_0456722d = 1;
  }
  local_80.r = 0.0;
  local_80.g = 0.0;
  local_80.b = 0.0;
  local_80.a = 0.0;
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_8c = 0.0;
  if (ADOIANOKIIK != (AEGOLGIJEBI_AOIPPHGJEND_o *)0x0) {
    pAVar9 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                       ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21462/*"textcolor"*/,
                        (MethodInfo *)0x0);
    pAVar10 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_17122/*"color"*/,
                         (MethodInfo *)0x0);
    pAVar11 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21497/*"thickness"*/,
                         (MethodInfo *)0x0);
    pAVar12 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21578/*"trail"*/,
                         (MethodInfo *)0x0);
    pAVar13 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                        ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19977/*"offsety"*/,
                         (MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    }
    pNVar14 = Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->static_fields;
    local_80.b = (pNVar14->GHJIFCNJDKD).fields.b;
    local_80.a = (pNVar14->GHJIFCNJDKD).fields.a;
    local_80.r = (pNVar14->GHJIFCNJDKD).fields.r;
    local_80.g = (pNVar14->GHJIFCNJDKD).fields.g;
    if ((pAVar9 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) ||
       (bVar8 = System_String__op_Equality
                          ((pAVar9->fields).JAICMIMBIOA,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0),
       !bVar8)) {
      if (pAVar10 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
        UnityEngine_ColorUtility__TryParseHtmlString
                  ((pAVar10->fields).JAICMIMBIOA,(UnityEngine_Color_o *)&local_80,(MethodInfo *)0x0)
        ;
      }
    }
    else {
      local_80._0_8_ = HCPAAIJOOKK.fields._0_8_;
      local_80._8_8_ = HCPAAIJOOKK.fields._8_8_;
    }
    local_88[1] = 4.0;
    if (pAVar11 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar11->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,local_88 + 1,(MethodInfo *)0x0);
    }
    local_88[0] = 0.15;
    if (pAVar12 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar12->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,local_88,(MethodInfo *)0x0);
    }
    local_8c = 0.0;
    if (pAVar13 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pSVar16 = (pAVar13->fields).JAICMIMBIOA;
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNPPAHHCBOM__MEEKIFOGCCL(pSVar16,&local_8c,(MethodInfo *)0x0);
    }
    uVar7 = local_80._8_8_;
    uVar6 = local_80._0_8_;
    fVar3 = local_8c;
    __this_01 = (__this->fields).super.m_Corners;
    pIVar17 = *(Il2CppClass **)&(ADOIANOKIIK->fields).KAAFCPPBEKP;
    fVar4 = local_88[0];
    fVar5 = local_88[1];
    __this_00 = (Il2CppObject *)
                thunk_FUN_01bda818(Nekki_SF2_GUI_StrikeThroughTextLine_NLGMBKIAOPD_TypeInfo);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar17;
    *(float *)&__this_00[3].klass = fVar5;
    *(float *)((long)&__this_00[4].klass + 4) = fVar4;
    *(float *)&__this_00[4].monitor = fVar3;
    *(undefined8 *)((long)&__this_00[3].monitor + 4) = uVar7;
    *(undefined8 *)((long)&__this_00[3].klass + 4) = uVar6;
    *(undefined4 *)((long)&__this_00[4].monitor + 4) = 0;
    lVar2 = Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Add__;
    if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
      pIVar15 = __this_01->bounds;
      *(int *)((long)&__this_01->max_length + 4) = *(int *)((long)&__this_01->max_length + 4) + 1;
      if (pIVar15 != (Il2CppArrayBounds *)0x0) {
        uVar1 = (uint)__this_01->max_length;
        if (uVar1 < (uint)pIVar15[1].lower_bound) {
          *(uint *)&__this_01->max_length = uVar1 + 1;
          (&pIVar15[2].length)[(int)uVar1] = (il2cpp_array_size_t)__this_00;
          thunk_FUN_01c20e04(&pIVar15[2].length + (int)uVar1,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Destroy()  [RVA 0x32721A0]
// Nekki.SF2.GUI.StrikeThroughTextLine$$Destroy @ RVA 0x32721A0

void Nekki_SF2_GUI_StrikeThroughTextLine__Destroy
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  pUVar1 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void Awake()  [RVA 0x32721E0]
// Nekki.SF2.GUI.StrikeThroughTextLine$$Awake @ RVA 0x32721E0

void Nekki_SF2_GUI_StrikeThroughTextLine__Awake
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if ((DAT_0456722e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&StringLiteral_14098/*"UI/Default"*/);
    DAT_0456722e = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  shader = UnityEngine_Shader__Find(StringLiteral_14098/*"UI/Default"*/,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._33_set_material.methodPtr)
            (__this,__this_00,(__this->klass->vtable)._33_set_material.method);
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this,
             (__this->klass->vtable)._23_set_color.method);
                    /* WARNING: Could not recover jumptable at 0x033722c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  return;
}


// ===== private void HBDNLIGALLI(List<StrikeThroughTextLine.NLGMBKIAOPD> CJNHFNHJHPE)  [RVA 0x32722C4]
// Nekki.SF2.GUI.StrikeThroughTextLine$$HBDNLIGALLI @ RVA 0x32722C4

void Nekki_SF2_GUI_StrikeThroughTextLine__HBDNLIGALLI
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).super.m_Corners = (UnityEngine_Vector3_array *)CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void Clear()  [RVA 0x3270EC0]
// Nekki.SF2.GUI.StrikeThroughTextLine$$Clear @ RVA 0x3270EC0

void Nekki_SF2_GUI_StrikeThroughTextLine__Clear
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *pSVar3;
  UnityEngine_Vector3_array *pUVar4;
  
  if ((DAT_0456722f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_Clear__)
    ;
    DAT_0456722f = 1;
  }
  pSVar3 = (__this->fields)._KHPCAICPJCK_k__BackingField;
  if (pSVar3 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields).super.m_Corners;
    if (pUVar4 != (UnityEngine_Vector3_array *)0x0) {
      iVar1 = (int32_t)pUVar4->max_length;
      iVar2 = *(int *)((long)&pUVar4->max_length + 4);
      *(undefined4 *)&pUVar4->max_length = 0;
      *(int *)((long)&pUVar4->max_length + 4) = iVar2 + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)pUVar4->bounds,0,iVar1,(MethodInfo *)0x0);
      }
      *(undefined1 *)&(__this->fields)._IAGANEPIJNF_k__BackingField = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PPILEILAHDI(List<StrikeThroughTextLine.NLGMBKIAOPD> CJNHFNHJHPE)  [RVA 0x32722CC]
// Nekki.SF2.GUI.StrikeThroughTextLine$$PPILEILAHDI @ RVA 0x32722CC

void Nekki_SF2_GUI_StrikeThroughTextLine__PPILEILAHDI
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._KHPCAICPJCK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper BKAFIEMJJGM)  [RVA 0x32722D4]
// Nekki.SF2.GUI.StrikeThroughTextLine$$OnPopulateMesh @ RVA 0x32722D4

void Nekki_SF2_GUI_StrikeThroughTextLine__OnPopulateMesh
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               UnityEngine_UI_VertexHelper_o *BKAFIEMJJGM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  undefined4 uVar3;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *__this_00;
  UnityEngine_UIVertex_array *verts;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auStack_170 [112];
  System_Collections_Generic_List_Enumerator_T__o local_100 [4];
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04567230 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    DAT_04567230 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (BKAFIEMJJGM != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BKAFIEMJJGM,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KHPCAICPJCK_k__BackingField;
    if (__this_00 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (local_100,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
      local_90.fields._index = local_100[0].fields._index;
      local_90.fields._version = local_100[0].fields._version;
      local_90.fields._list = local_100[0].fields._list;
      local_90.fields._current = local_100[0].fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_90,
                             Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                            );
          pIVar1 = local_90.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_90,
                       Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                      );
            return;
          }
          if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar9 = *(undefined8 *)((long)&local_90.fields._current[1].monitor + 4);
          fVar6 = *(float *)((long)&local_90.fields._current[2].klass + 4) -
                  *(float *)&local_90.fields._current[1].monitor;
          fVar7 = SUB84(local_90.fields._current[2].monitor,0) - (float)uVar9;
          fVar8 = (float)((ulong)local_90.fields._current[2].monitor >> 0x20) -
                  (float)((ulong)uVar9 >> 0x20);
        } while (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 1e-05);
        verts = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
        uVar4 = 0;
        pfVar5 = &verts->m_Items[0].fields.position.fields.y;
        do {
          if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          memcpy(local_100,
                 &(UnityEngine_UIVertex_TypeInfo->static_fields->s_DefaultTangent).fields.w,0x6c);
          if (verts == (UnityEngine_UIVertex_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          memcpy(auStack_170,local_100,0x6c);
          if ((uint)verts->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          memcpy((UnityEngine_Vector3_Fields *)(pfVar5 + -1),auStack_170,0x6c);
          switch(uVar4 & 0xffffffff) {
          case 0:
            fVar6 = *(float *)&pIVar1[3].klass;
            uVar9 = *(undefined8 *)((long)&pIVar1[1].monitor + 4);
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x = *(float *)&pIVar1[1].monitor - fVar6;
            *(ulong *)pfVar5 = CONCAT44((float)((ulong)uVar9 >> 0x20) + 0.0,fVar6 + (float)uVar9);
            break;
          case 1:
            fVar6 = *(float *)((long)&pIVar1[2].monitor + 4);
            uVar9 = *(undefined8 *)((long)&pIVar1[2].klass + 4);
            uVar9 = CONCAT44(*(float *)&pIVar1[3].klass + (float)((ulong)uVar9 >> 0x20),
                             *(float *)&pIVar1[3].klass + (float)uVar9);
            goto LAB_03372524;
          case 2:
            fVar7 = *(float *)((long)&pIVar1[2].monitor + 4);
            fVar6 = *(float *)&pIVar1[3].klass;
            fVar8 = *(float *)&pIVar1[2].monitor;
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x =
                 fVar6 + *(float *)((long)&pIVar1[2].klass + 4);
            *pfVar5 = fVar8 - fVar6;
            pfVar5[1] = fVar7 + 0.0;
            break;
          case 3:
            fVar6 = *(float *)&pIVar1[2].klass;
            uVar9 = CONCAT44((float)((ulong)pIVar1[1].monitor >> 0x20) - *(float *)&pIVar1[3].klass,
                             SUB84(pIVar1[1].monitor,0) - *(float *)&pIVar1[3].klass);
LAB_03372524:
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x = (float)(int)uVar9;
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->y = (float)(int)((ulong)uVar9 >> 0x20);
            pfVar5[1] = fVar6 + 0.0;
          }
          *pfVar5 = *pfVar5 + *(float *)((long)&pIVar1[4].monitor + 4);
          uVar3 = FUN_01ca4568(*(undefined4 *)((long)&pIVar1[3].klass + 4),
                               *(undefined4 *)&pIVar1[3].monitor,
                               *(undefined4 *)((long)&pIVar1[3].monitor + 4),
                               *(undefined4 *)&pIVar1[4].klass,0);
          if ((uint)verts->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar4 = uVar4 + 1;
          pfVar5[9] = (float)uVar3;
          pfVar5 = pfVar5 + 0x1b;
        } while (uVar4 != 4);
        UnityEngine_UI_VertexHelper__AddUIVertexQuad(BKAFIEMJJGM,verts,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3272644]
// Nekki.SF2.GUI.StrikeThroughTextLine$$.cctor @ RVA 0x3272644

void Nekki_SF2_GUI_StrikeThroughTextLine___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_StrikeThroughTextLine_StaticFields *pNVar1;
  
  if ((DAT_04567231 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo);
    DAT_04567231 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_StrikeThroughTextLine_TypeInfo->static_fields;
  (pNVar1->GHJIFCNJDKD).fields.b = 0.0;
  (pNVar1->GHJIFCNJDKD).fields.a = 1.0;
  (pNVar1->GHJIFCNJDKD).fields.r = 0.0;
  (pNVar1->GHJIFCNJDKD).fields.g = 0.0;
  return;
}

