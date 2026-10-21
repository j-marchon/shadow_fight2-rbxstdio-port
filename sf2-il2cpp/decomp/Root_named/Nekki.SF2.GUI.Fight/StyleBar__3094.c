// TypeDefIndex 3094
// Namespace: Nekki.SF2.GUI.Fight
// public class StyleBar : MonoBehaviour
// Fields:
//   private ResolutionImageSkew background; // 0x20
//   private List<StyleBarStrip> CIKMDLPKCCF; // 0x28
//   private const float LDCOMMGHBNA = 1;

// ===== public virtual void Init()  [RVA 0x34C9F08]
// Nekki.SF2.GUI.Fight.StyleBar$$Init @ RVA 0x34C9F08

void Nekki_SF2_GUI_Fight_StyleBar__Init(Nekki_SF2_GUI_Fight_StyleBar_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void Render()  [RVA 0x34C9F0C]
// Nekki.SF2.GUI.Fight.StyleBar$$Render @ RVA 0x34C9F0C

void Nekki_SF2_GUI_Fight_StyleBar__Render(Nekki_SF2_GUI_Fight_StyleBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this_01;
  int index;
  
  if ((DAT_04568659 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568659 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) break;
      Nekki_SF2_GUI_Fight_StyleBarStrip__Render(__this_01,(MethodInfo *)0x0);
      __this_00 = (__this->fields).CIKMDLPKCCF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddStrip(string IEPECMCLKJB, string AAIHDEKMIJG = "", float JLNCOIIGIDA = 0, string IFBMAFACNAA = "")  [RVA 0x34C9F98]
// Nekki.SF2.GUI.Fight.StyleBar$$AddStrip @ RVA 0x34C9F98

void Nekki_SF2_GUI_Fight_StyleBar__AddStrip
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,System_String_o *IEPECMCLKJB,
               System_String_o *AAIHDEKMIJG,float JLNCOIIGIDA,System_String_o *IFBMAFACNAA,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB;
  MethodInfo *method_00;
  
  if ((DAT_0456865a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<StyleBarStrip>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456865a = 1;
  }
  if (IEPECMCLKJB == (System_String_o *)0x0) {
    return;
  }
  __this_00 = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (IFBMAFACNAA != (System_String_o *)0x0) {
    bVar1 = System_String__Equals
                      (IFBMAFACNAA,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_035ca0e8;
    }
    else {
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_035ca0e8;
      UnityEngine_Object__set_name(__this_00,IFBMAFACNAA,(MethodInfo *)0x0);
    }
    AGNGOOMCNMB = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)__this_00,
                             Method_UnityEngine_GameObject_AddComponent<StyleBarStrip>__);
    if (AGNGOOMCNMB != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
      *(System_String_o **)&(AGNGOOMCNMB->fields).super.super.super.m_PixelsPerUnitMultiplier =
           AAIHDEKMIJG;
      thunk_FUN_01c20e04(&(AGNGOOMCNMB->fields).super.super.super.m_PixelsPerUnitMultiplier,
                         AAIHDEKMIJG);
      method_00 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                ((Nekki_SF2_GUI_ResolutionImage_o *)AGNGOOMCNMB,IEPECMCLKJB,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                ((Nekki_SF2_GUI_ResolutionImageSkew_o *)AGNGOOMCNMB,JLNCOIIGIDA,(MethodInfo *)0x0);
      (*(AGNGOOMCNMB->klass->vtable)._45_SetNativeSize.methodPtr)
                (AGNGOOMCNMB,(AGNGOOMCNMB->klass->vtable)._45_SetNativeSize.method);
      Nekki_SF2_GUI_Fight_StyleBar__AddStrip(__this,AGNGOOMCNMB,method_00);
      return;
    }
  }
LAB_035ca0e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddStripRange(IEnumerable<StyleBarStrip> NMMKGIMBHFF)  [RVA 0x34CA274]
// Nekki.SF2.GUI.Fight.StyleBar$$AddStripRange @ RVA 0x34CA274

/* WARNING: Removing unreachable block (ram,0x035ca48c) */

void Nekki_SF2_GUI_Fight_StyleBar__AddStripRange
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,
               System_Collections_Generic_IEnumerable_StyleBarStrip__o *NMMKGIMBHFF,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB;
  System_Collections_Generic_IEnumerable_StyleBarStrip__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  
  if ((DAT_0456865b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_0456865b = 1;
  }
  if (NMMKGIMBHFF == (System_Collections_Generic_IEnumerable_StyleBarStrip__o *)0x0) {
    return;
  }
  pSVar5 = NMMKGIMBHFF->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<StyleBarStrip>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_035ca324;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(NMMKGIMBHFF);
LAB_035ca324:
  plVar3 = (long *)(*pVVar2->methodPtr)(NMMKGIMBHFF,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035ca394;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_035ca394:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_StyleBarStrip__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<StyleBarStrip>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035ca3f0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_035ca3f0:
    AGNGOOMCNMB = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Fight_StyleBar__AddStrip(__this,AGNGOOMCNMB,method);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_035ca468;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035ca468:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


// ===== public void AddStrip(StyleBarStrip AGNGOOMCNMB)  [RVA 0x34CA0EC]
// Nekki.SF2.GUI.Fight.StyleBar$$AddStrip @ RVA 0x34CA0EC

void Nekki_SF2_GUI_Fight_StyleBar__AddStrip
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,
               Nekki_SF2_GUI_Fight_StyleBarStrip_o *AGNGOOMCNMB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar4;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  Nekki_SF2_GUI_Fight_StyleBarStrip_array *pNVar5;
  
  if ((DAT_0456865c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456865c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AGNGOOMCNMB,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (AGNGOOMCNMB != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMin
                  (pUVar4,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)AGNGOOMCNMB,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar4,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Fight_StyleBarStrip__Init(AGNGOOMCNMB,1.0,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<StyleBarStrip>_Add__;
          __this_01 = (__this->fields).CIKMDLPKCCF;
          if (__this_01 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
            pNVar5 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pNVar5 != (Nekki_SF2_GUI_Fight_StyleBarStrip_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pNVar5->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pNVar5->m_Items[(int)uVar1] = AGNGOOMCNMB;
                thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,AGNGOOMCNMB);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)AGNGOOMCNMB,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
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


// ===== public void SetSkewAngle(float JLNCOIIGIDA)  [RVA 0x34CA548]
// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewAngle @ RVA 0x34CA548

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewAngle
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  
  if ((DAT_0456865d & 1) == 0) {
    FUN_01bab630(&System_Action<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_OCOBANABBDH__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
    DAT_0456865d = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_StyleBar_KJAOIOOKPOO_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(float *)&__this_00[1].klass = JLNCOIIGIDA;
    Nekki_SF2_GUI_Fight_StyleBar__SetSkewBackground(__this,JLNCOIIGIDA,method_00);
    __this_01 = (__this->fields).CIKMDLPKCCF;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<StyleBarStrip>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSkewAngle(float JLNCOIIGIDA, int LFMMJKEFIMJ)  [RVA 0x34CA6D4]
// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewAngle @ RVA 0x34CA6D4

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewAngle
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,int32_t LFMMJKEFIMJ,
               MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_01;
  
  if ((DAT_0456865e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_0456865e = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    if ((__this_00->fields)._size <= LFMMJKEFIMJ) {
      return;
    }
    __this_01 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                           Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle(__this_01,JLNCOIIGIDA,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetSkewBackground(float JLNCOIIGIDA)  [RVA 0x34CA63C]
// Nekki.SF2.GUI.Fight.StyleBar$$SetSkewBackground @ RVA 0x34CA63C

void Nekki_SF2_GUI_Fight_StyleBar__SetSkewBackground
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float JLNCOIIGIDA,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar2;
  
  if ((DAT_0456865f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456865f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).background;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle(pNVar2,JLNCOIIGIDA,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetValue(float CJNHFNHJHPE, int ABKNPBMGHKH)  [RVA 0x34CA770]
// Nekki.SF2.GUI.Fight.StyleBar$$SetValue @ RVA 0x34CA770

void Nekki_SF2_GUI_Fight_StyleBar__SetValue
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_StyleBarStrip__o *__this_01;
  
  if ((DAT_04568660 & 1) == 0) {
    FUN_01bab630(&System_Action<StyleBarStrip>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_IKLHIKJBCKC__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
    DAT_04568660 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_StyleBar_FDLDFDEEELN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(float *)&__this_00[1].klass = CJNHFNHJHPE;
    *(int32_t *)((long)&__this_00[1].klass + 4) = ABKNPBMGHKH;
    __this_01 = (__this->fields).CIKMDLPKCCF;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<StyleBarStrip>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 Method_System_Collections_Generic_List<StyleBarStrip>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetValue(float CJNHFNHJHPE, int ABKNPBMGHKH, int LFMMJKEFIMJ)  [RVA 0x34CA860]
// Nekki.SF2.GUI.Fight.StyleBar$$SetValue @ RVA 0x34CA860

void Nekki_SF2_GUI_Fight_StyleBar__SetValue
               (Nekki_SF2_GUI_Fight_StyleBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               int32_t LFMMJKEFIMJ,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Nekki_SF2_GUI_Fight_StyleBarStrip_o *__this_01;
  
  if ((DAT_04568661 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568661 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    if ((__this_00->fields)._size <= LFMMJKEFIMJ) {
      return;
    }
    __this_01 = (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                           Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    if (__this_01 != (Nekki_SF2_GUI_Fight_StyleBarStrip_o *)0x0) {
      Nekki_SF2_GUI_Fight_StyleBarStrip__SetValue
                (__this_01,CJNHFNHJHPE,ABKNPBMGHKH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetValue(int LFMMJKEFIMJ)  [RVA 0x34CA910]
// Nekki.SF2.GUI.Fight.StyleBar$$GetValue @ RVA 0x34CA910

float Nekki_SF2_GUI_Fight_StyleBar__GetValue
                (Nekki_SF2_GUI_Fight_StyleBar_o *__this,int32_t LFMMJKEFIMJ,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  Il2CppObject *pIVar1;
  float fVar2;
  
  if ((DAT_04568662 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
    DAT_04568662 = 1;
  }
  __this_00 = (__this->fields).CIKMDLPKCCF;
  if (__this_00 != (System_Collections_Generic_List_StyleBarStrip__o *)0x0) {
    fVar2 = 0.0;
    if (LFMMJKEFIMJ < (__this_00->fields)._size) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,LFMMJKEFIMJ,
                          Method_System_Collections_Generic_List<StyleBarStrip>_get_Item__);
      if (pIVar1 == (Il2CppObject *)0x0) goto LAB_035ca98c;
      fVar2 = *(float *)((long)&pIVar1[0xf].klass + 4);
    }
    return fVar2;
  }
LAB_035ca98c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34CA990]
// Nekki.SF2.GUI.Fight.StyleBar$$.ctor @ RVA 0x34CA990

void Nekki_SF2_GUI_Fight_StyleBar___ctor(Nekki_SF2_GUI_Fight_StyleBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StyleBarStrip__o *__this_00;
  System_Collections_Generic_List_StyleBarStrip__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568663 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<StyleBarStrip>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<StyleBarStrip>_TypeInfo);
    DAT_04568663 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_StyleBarStrip__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<StyleBarStrip>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<StyleBarStrip>__ctor__);
  ppSVar1 = &(__this->fields).CIKMDLPKCCF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

