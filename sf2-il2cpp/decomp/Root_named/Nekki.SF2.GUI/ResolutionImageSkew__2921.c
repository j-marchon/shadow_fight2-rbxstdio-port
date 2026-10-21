// TypeDefIndex 2921
// Namespace: Nekki.SF2.GUI
// public class ResolutionImageSkew : ResolutionImage
// Fields:
//   protected float _SkewAngle; // 0x124
//   protected List<UIVertex> MNGNDPJEHBD; // 0x128

// ===== public void set_SkewAngle(float CJNHFNHJHPE)  [RVA 0x3450E24]
// Nekki.SF2.GUI.ResolutionImageSkew$$set_SkewAngle @ RVA 0x3450E24

void Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageSkew_c *pNVar1;
  
  pNVar1 = __this->klass;
  *(float *)((long)&(__this->fields).super._SpriteName + 4) = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x03550e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._28_SetVerticesDirty.methodPtr)
            (__this,(pNVar1->vtable)._28_SetVerticesDirty.method);
  return;
}


// ===== public float get_SkewAngle()  [RVA 0x3450E38]
// Nekki.SF2.GUI.ResolutionImageSkew$$get_SkewAngle @ RVA 0x3450E38

float Nekki_SF2_GUI_ResolutionImageSkew__get_SkewAngle
                (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,MethodInfo *method)

{
  return *(float *)((long)&(__this->fields).super._SpriteName + 4);
}


// ===== protected void MGEMOHEBNPF(VertexHelper BALEEENOIJA, Vector2 PGFAIJMMOHJ)  [RVA 0x3450E40]
// Nekki.SF2.GUI.ResolutionImageSkew$$MGEMOHEBNPF @ RVA 0x3450E40

void Nekki_SF2_GUI_ResolutionImageSkew__MGEMOHEBNPF
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *BALEEENOIJA,UnityEngine_Vector2_o PGFAIJMMOHJ,
               MethodInfo *method)

{
  long lVar1;
  MethodInfo_274EEA0 *pMVar2;
  float fVar3;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  void *__src;
  float fVar4;
  UnityEngine_UIVertex_o local_140;
  undefined1 auStack_d0 [104];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_045682a9 & 1) == 0) {
    FUN_01bab630(PGFAIJMMOHJ.fields.x,&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_045682a9 = 1;
  }
  fVar4 = tanf((*(float *)((long)&(__this->fields).super._SpriteName + 4) * 3.1415927) / 180.0);
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  if ((BALEEENOIJA == (UnityEngine_UI_VertexHelper_o *)0x0) ||
     (UnityEngine_UI_VertexHelper__GetUIVertexStream(BALEEENOIJA,__this_00,(MethodInfo *)0x0),
     __this_00 == (System_Collections_Generic_List_UIVertex__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (5 < (__this_00->fields)._size) {
    fVar4 = PGFAIJMMOHJ.fields.y * fVar4;
    System_Collections_Generic_List<UIVertex>__get_Item
              (&local_140,__this_00,0,Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    __src = (void *)((ulong)&local_140 | 4);
    memcpy(auStack_d0,__src,0x68);
    pMVar2 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
    local_140.fields.position.fields.x = local_140.fields.position.fields.x - fVar4;
    memcpy(__src,auStack_d0,0x68);
                    /* try { // try from 03550f98 to 036516cf has its CatchHandler @ 03550f98
                       catch() { ... } // from try @ 03550f98 with catch @ 03550f98
                       catch() { ... } // from try @ 035517c4 with catch @ 03550f98
                       catch() { ... } // from try @ 03551a70 with catch @ 03550f98
                       catch() { ... } // from try @ 03551c04 with catch @ 03550f98
                       catch() { ... } // from try @ 03551c14 with catch @ 03550f98
                       catch() { ... } // from try @ 03551c20 with catch @ 03550f98
                       catch() { ... } // from try @ 03551d14 with catch @ 03550f98
                       catch() { ... } // from try @ 03551dcc with catch @ 03550f98 */
    System_Collections_Generic_List<UIVertex>__set_Item(__this_00,0,&local_140,pMVar2);
    System_Collections_Generic_List<UIVertex>__get_Item
              (&local_140,__this_00,4,Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    fVar3 = local_140.fields.position.fields.x;
    memcpy(auStack_d0,__src,0x68);
    pMVar2 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
    local_140.fields.position.fields.x = fVar3 - fVar4;
    memcpy(__src,auStack_d0,0x68);
    System_Collections_Generic_List<UIVertex>__set_Item(__this_00,4,&local_140,pMVar2);
    System_Collections_Generic_List<UIVertex>__get_Item
              (&local_140,__this_00,5,Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    fVar3 = local_140.fields.position.fields.x;
    memcpy(auStack_d0,__src,0x68);
    pMVar2 = Method_System_Collections_Generic_List<UIVertex>_set_Item__;
    local_140.fields.position.fields.x = fVar3 - fVar4;
    memcpy(__src,auStack_d0,0x68);
    System_Collections_Generic_List<UIVertex>__set_Item(__this_00,5,&local_140,pMVar2);
  }
  UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
  UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(BALEEENOIJA,__this_00,(MethodInfo *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== protected override void OnPopulateMesh(VertexHelper BALEEENOIJA)  [RVA 0x34510A8]
// Nekki.SF2.GUI.ResolutionImageSkew$$OnPopulateMesh @ RVA 0x34510A8

void Nekki_SF2_GUI_ResolutionImageSkew__OnPopulateMesh
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,
               UnityEngine_UI_VertexHelper_o *BALEEENOIJA,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o PGFAIJMMOHJ;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  method_00 = (MethodInfo *)0x0;
  UnityEngine_UI_Image__OnPopulateMesh
            ((UnityEngine_UI_Image_o *)__this,BALEEENOIJA,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      PGFAIJMMOHJ.fields.y = UVar3.fields.m_Height;
      PGFAIJMMOHJ.fields.x = UVar2.fields.m_Width;
      Nekki_SF2_GUI_ResolutionImageSkew__MGEMOHEBNPF(__this,BALEEENOIJA,PGFAIJMMOHJ,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x345111C]
// Nekki.SF2.GUI.ResolutionImageSkew$$.ctor @ RVA 0x345111C

void Nekki_SF2_GUI_ResolutionImageSkew___ctor
               (Nekki_SF2_GUI_ResolutionImageSkew_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045682aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_045682aa = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_UIVertex__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo,method);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields).super.UseCacheForSingleSprites
       = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).super.UseCacheForSingleSprites,__this_00);
  Nekki_SF2_GUI_ResolutionImage___ctor((Nekki_SF2_GUI_ResolutionImage_o *)__this,(MethodInfo *)0x0);
  return;
}

