// TypeDefIndex 1668
// Namespace: UIFigures
// public class UILine : UIFigure
// Fields:
//   private bool _SingleTexturCord; // 0xF0
//   private List<Vector2> _Points; // 0xF8
//   private float _Width; // 0x100
//   private bool _ResizeInBounds; // 0x104
//   private List<Vector2> MCBFPMHDILF; // 0x108

// ===== public List<Vector2> get_Points()  [RVA 0x31CA050]
// UIFigures.UILine$$get_Points @ RVA 0x31CA050

System_Collections_Generic_List_Vector2__o *
UIFigures_UILine__get_Points(UIFigures_UILine_o *__this,MethodInfo *method)

{
  return *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._SingleTexturCord;
}


// ===== public void set_Points(List<Vector2> CJNHFNHJHPE)  [RVA 0x31CA058]
// UIFigures.UILine$$set_Points @ RVA 0x31CA058

void UIFigures_UILine__set_Points
               (UIFigures_UILine_o *__this,System_Collections_Generic_List_Vector2__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._SingleTexturCord = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public float get_Width()  [RVA 0x31CA060]
// UIFigures.UILine$$get_Width @ RVA 0x31CA060

float UIFigures_UILine__get_Width(UIFigures_UILine_o *__this,MethodInfo *method)

{
  return *(float *)&(__this->fields)._Points;
}


// ===== public void set_Width(float CJNHFNHJHPE)  [RVA 0x31CA068]
// UIFigures.UILine$$set_Width @ RVA 0x31CA068

void UIFigures_UILine__set_Width(UIFigures_UILine_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  *(float *)&(__this->fields)._Points = CJNHFNHJHPE;
  return;
}


// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x31CA070]
// UIFigures.UILine$$OnPopulateMesh @ RVA 0x31CA070

void UIFigures_UILine__OnPopulateMesh
               (UIFigures_UILine_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_RectTransform_o *pUVar2;
  System_Collections_Generic_List_Vector2__o *pSVar3;
  undefined1 FFLLFNDLJLE;
  long lVar4;
  UnityEngine_Vector2_array *pUVar5;
  int index;
  System_Collections_Generic_List_Vector2__o *KEMHFHOJFCB;
  undefined4 uVar6;
  ulong in_d1;
  undefined8 in_d2;
  ulong in_d3;
  float PCBIKNDPPAD;
  UnityEngine_Sprite_o *pUVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Color_o GKBNFBINIIP;
  
  if ((DAT_04566c5b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Item__);
    DAT_04566c5b = 1;
  }
  UIFigures_UIFigure__OnPopulateMesh((UIFigures_UIFigure_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  if (*(char *)((long)&(__this->fields)._Points + 4) == '\0') {
    KEMHFHOJFCB = *(System_Collections_Generic_List_Vector2__o **)
                   &(__this->fields)._SingleTexturCord;
    PCBIKNDPPAD = *(float *)&(__this->fields)._Points;
                    /* try { // try from 032ca268 to 033ca26b has its CatchHandler @ 032ca288 */
                    /* try { // try from 032ca26c to 033ca26f has its CatchHandler @ 032ca284 */
    uVar6 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                      (__this,(__this->klass->vtable)._22_get_color.method);
                    /* try { // try from 032ca270 to 033ca273 has its CatchHandler @ 032ca288 */
    FFLLFNDLJLE = *(undefined1 *)&(__this->fields).super.INCPCFENLPJ.fields.x;
                    /* try { // try from 032ca274 to 033ca277 has its CatchHandler @ 032ca280 */
                    /* try { // try from 032ca278 to 033ca2af has its CatchHandler @ 032c9858 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ca274 with catch @ 032ca280
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ca26c with catch @ 032ca284
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ca268 with catch @ 032ca288
                       catch(type#1 @ 03f99f68) { ... } // from try @ 032ca270 with catch @ 032ca288
                        */
LAB_032ca28c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9dbc with catch @ 032ca28c
                        */
    GKBNFBINIIP.fields.g = (undefined4)in_d1;
    GKBNFBINIIP.fields.r = (float)uVar6;
    GKBNFBINIIP.fields.b = (undefined4)in_d2;
    GKBNFBINIIP.fields.a = (undefined4)in_d3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9dfc with catch @ 032ca290
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9d80 with catch @ 032ca294
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9d24 with catch @ 032ca298
                        */
                    /* try { // try from 032ca2b0 to 033ca2b3 has its CatchHandler @ 032ca2c8 */
    DDFDPLHKGKB__GBCBKEDFNGJ
              (BALEEENOIJA,KEMHFHOJFCB,PCBIKNDPPAD,GKBNFBINIIP,(bool)FFLLFNDLJLE,(MethodInfo *)0x0);
    return;
  }
  lVar4 = *(long *)&(__this->fields)._Width;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    pUVar7 = (__this->fields).super._Sprite;
    UVar8 = (__this->fields).super.CKIBKNMJGAJ.fields;
    pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UVar12 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        in_d3 = (ulong)(uint)UVar12.fields.m_Height;
        pSVar3 = *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._SingleTexturCord
        ;
        if (pSVar3 != (System_Collections_Generic_List_Vector2__o *)0x0) {
          in_d1 = 0x3f0000003f000000;
          in_d2 = 0x3f0000003f000000;
          index = 0;
          do {
            KEMHFHOJFCB = *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._Width;
            if ((pSVar3->fields)._size <= index) {
              PCBIKNDPPAD = *(float *)&(__this->fields)._Points;
              uVar6 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                                (__this,(__this->klass->vtable)._22_get_color.method);
              FFLLFNDLJLE = *(undefined1 *)&(__this->fields).super.INCPCFENLPJ.fields.x;
              goto LAB_032ca28c;
            }
            UVar9 = System_Collections_Generic_List<Vector2>__get_Item
                              (pSVar3,index,
                               Method_System_Collections_Generic_List<Vector2>_get_Item__);
            pSVar3 = *(System_Collections_Generic_List_Vector2__o **)
                      &(__this->fields)._SingleTexturCord;
            if (pSVar3 == (System_Collections_Generic_List_Vector2__o *)0x0) break;
            UVar10 = System_Collections_Generic_List<Vector2>__get_Item
                               (pSVar3,index,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            lVar4 = Method_System_Collections_Generic_List<Vector2>_Add__;
            in_d1 = (ulong)UVar10.fields >> 0x20;
            if (KEMHFHOJFCB == (System_Collections_Generic_List_Vector2__o *)0x0) break;
            pUVar5 = (KEMHFHOJFCB->fields)._items;
            (KEMHFHOJFCB->fields)._version = (KEMHFHOJFCB->fields)._version + 1;
            if (pUVar5 == (UnityEngine_Vector2_array *)0x0) break;
            uVar1 = (KEMHFHOJFCB->fields)._size;
            UVar9.fields.x =
                 UVar11.fields.m_Width * 0.5 * (UVar9.fields.x - (SUB84(pUVar7,0) + UVar8.x) * 0.5);
            UVar9.fields.y =
                 UVar12.fields.m_Height * 0.5 *
                 (UVar10.fields.y - ((float)((ulong)pUVar7 >> 0x20) + UVar8.y) * 0.5);
            if (uVar1 < (uint)pUVar5->max_length) {
              (KEMHFHOJFCB->fields)._size = uVar1 + 1;
              pUVar5->m_Items[(int)uVar1].fields = UVar9.fields;
            }
            else {
              UVar10.fields.y = UVar9.fields.y;
              UVar10.fields.x = UVar9.fields.x;
              in_d1 = (ulong)(uint)UVar9.fields.y;
              System_Collections_Generic_List<Vector2>__AddWithResize
                        (KEMHFHOJFCB,UVar10,
                         *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = *(System_Collections_Generic_List_Vector2__o **)
                      &(__this->fields)._SingleTexturCord;
            index = index + 1;
          } while (pSVar3 != (System_Collections_Generic_List_Vector2__o *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31CA2C0]
// UIFigures.UILine$$.ctor @ RVA 0x31CA2C0

void UIFigures_UILine___ctor(UIFigures_UILine_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Vector2__o *pSVar1;
  bool_conflict *pbVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 032ca2b0 with catch @ 032ca2c8 */
  if ((DAT_04566c5c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
                    /* try { // try from 032ca308 to 033ca32f has its CatchHandler @ 032ca344 */
    DAT_04566c5c = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_Vector2__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo,method);
  System_Collections_Generic_List<Vector2>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Vector2>__ctor__);
  pbVar2 = &(__this->fields)._SingleTexturCord;
  *(System_Collections_Generic_List_Vector2__o **)pbVar2 = pSVar1;
  thunk_FUN_01c20e04(pbVar2,pSVar1);
                    /* try { // try from 032ca330 to 033ca33b has its CatchHandler @ 032c9858 */
  *(undefined4 *)&(__this->fields)._Points = 0x41200000;
                    /* try { // try from 032ca33c to 033ca343 has its CatchHandler @ 032ca344 */
  pSVar1 = (System_Collections_Generic_List_Vector2__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ca308 with catch @ 032ca344
                       catch(type#2 @ 00000000) { ... } // from try @ 032ca33c with catch @ 032ca344
                        */
  System_Collections_Generic_List<Vector2>___ctor
            (pSVar1,Method_System_Collections_Generic_List<Vector2>__ctor__);
  *(System_Collections_Generic_List_Vector2__o **)&(__this->fields)._Width = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._Width,pSVar1);
  UIFigures_UIFigure___ctor((UIFigures_UIFigure_o *)__this,(MethodInfo *)0x0);
  return;
}

