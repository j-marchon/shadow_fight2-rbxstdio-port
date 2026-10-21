// Nekki.SF2.GUI.TextGradient$$ModifyMesh @ RVA 0x34D2A60

void Nekki_SF2_GUI_TextGradient__ModifyMesh
               (Nekki_SF2_GUI_TextGradient_o *__this,UnityEngine_UI_VertexHelper_o *DAEILFBNGHE,
               MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  ulong uVar4;
  System_Collections_Generic_List_UIVertex__o *__this_00;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_UIVertex_o UStack_1b0;
  UnityEngine_UIVertex_o UStack_140;
  UnityEngine_UIVertex_o local_d0;
  
  if ((DAT_045686c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_045686c3 = 1;
  }
  local_d0.fields.uv3.fields.y = 0.0;
  local_d0.fields.uv3.fields.z = 0.0;
  local_d0.fields.uv3.fields.x = 0.0;
  local_d0.fields.uv1.fields.z = 0.0;
  local_d0.fields.uv1.fields.w = 0.0;
  local_d0.fields.uv1.fields.x = 0.0;
  local_d0.fields.uv1.fields.y = 0.0;
  local_d0.fields.uv2.fields.z = 0.0;
  local_d0.fields.uv2.fields.w = 0.0;
  local_d0.fields.uv2.fields.x = 0.0;
  local_d0.fields.uv2.fields.y = 0.0;
  local_d0.fields.color.fields.rgba = 0;
  local_d0.fields.color.fields.r = 0;
  local_d0.fields.color.fields.g = 0;
  local_d0.fields.color.fields.b = 0;
  local_d0.fields.color.fields.a = 0;
  local_d0.fields.tangent.fields.z = 0.0;
  local_d0.fields.tangent.fields.w = 0.0;
  local_d0.fields.uv0.fields.z = 0.0;
  local_d0.fields.uv0.fields.w = 0.0;
  local_d0.fields.uv0.fields.x = 0.0;
  local_d0.fields.uv0.fields.y = 0.0;
  local_d0.fields.position.fields.z = 0.0;
  local_d0.fields.normal.fields.x = 0.0;
  local_d0.fields.position.fields.x = 0.0;
  local_d0.fields.position.fields.y = 0.0;
  local_d0.fields.tangent.fields.x = 0.0;
  local_d0.fields.tangent.fields.y = 0.0;
  local_d0.fields.normal.fields.y = 0.0;
  local_d0.fields.normal.fields.z = 0.0;
  uVar4 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((uVar4 & 1) != 0) {
    __this_00 = (System_Collections_Generic_List_UIVertex__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
    System_Collections_Generic_List<UIVertex>___ctor
              (__this_00,Method_System_Collections_Generic_List<UIVertex>__ctor__);
    if ((DAEILFBNGHE == (UnityEngine_UI_VertexHelper_o *)0x0) ||
       (UnityEngine_UI_VertexHelper__GetUIVertexStream(DAEILFBNGHE,__this_00,(MethodInfo *)0x0),
       __this_00 == (System_Collections_Generic_List_UIVertex__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<UIVertex>__get_Item
              (&UStack_140,__this_00,0,Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    fVar9 = UStack_140.fields.position.fields.y;
    System_Collections_Generic_List<UIVertex>__get_Item
              (&UStack_140,__this_00,0,Method_System_Collections_Generic_List<UIVertex>_get_Item__);
    fVar8 = UStack_140.fields.position.fields.y;
    iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(DAEILFBNGHE,(MethodInfo *)0x0);
    if (1 < iVar3) {
      iVar5 = 1;
      do {
        System_Collections_Generic_List<UIVertex>__get_Item
                  (&UStack_140,__this_00,iVar5,
                   Method_System_Collections_Generic_List<UIVertex>_get_Item__);
        fVar7 = UStack_140.fields.position.fields.y;
        if ((fVar8 < UStack_140.fields.position.fields.y) ||
           (fVar6 = UStack_140.fields.position.fields.y, fVar7 = fVar8,
           fVar9 <= UStack_140.fields.position.fields.y)) {
          fVar6 = fVar9;
          fVar8 = fVar7;
        }
        fVar9 = fVar6;
        iVar5 = iVar5 + 1;
        iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(DAEILFBNGHE,(MethodInfo *)0x0);
      } while (iVar5 < iVar3);
    }
    local_d0.fields.uv3.fields.y = 0.0;
    local_d0.fields.uv3.fields.z = 0.0;
    local_d0.fields.uv3.fields.x = 0.0;
    local_d0.fields.uv1.fields.z = 0.0;
    local_d0.fields.uv1.fields.w = 0.0;
    local_d0.fields.uv1.fields.x = 0.0;
    local_d0.fields.uv1.fields.y = 0.0;
    local_d0.fields.uv2.fields.z = 0.0;
    local_d0.fields.uv2.fields.w = 0.0;
    local_d0.fields.uv2.fields.x = 0.0;
    local_d0.fields.uv2.fields.y = 0.0;
    local_d0.fields.color.fields.rgba = 0;
    local_d0.fields.color.fields.r = 0;
    local_d0.fields.color.fields.g = 0;
    local_d0.fields.color.fields.b = 0;
    local_d0.fields.color.fields.a = 0;
    local_d0.fields.tangent.fields.z = 0.0;
    local_d0.fields.tangent.fields.w = 0.0;
    local_d0.fields.uv0.fields.z = 0.0;
    local_d0.fields.uv0.fields.w = 0.0;
    local_d0.fields.uv0.fields.x = 0.0;
    local_d0.fields.uv0.fields.y = 0.0;
    local_d0.fields.position.fields.z = 0.0;
    local_d0.fields.normal.fields.x = 0.0;
    local_d0.fields.position.fields.x = 0.0;
    local_d0.fields.position.fields.y = 0.0;
    local_d0.fields.tangent.fields.x = 0.0;
    local_d0.fields.tangent.fields.y = 0.0;
    local_d0.fields.normal.fields.y = 0.0;
    local_d0.fields.normal.fields.z = 0.0;
    iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(DAEILFBNGHE,(MethodInfo *)0x0);
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        UnityEngine_UI_VertexHelper__PopulateUIVertex(DAEILFBNGHE,&local_d0,iVar5,(MethodInfo *)0x0)
        ;
        uVar1 = (__this->fields).topColor.fields.rgba;
        uVar2._0_1_ = (__this->fields).topColor.fields.r;
        uVar2._1_1_ = (__this->fields).topColor.fields.g;
        uVar2._2_1_ = (__this->fields).topColor.fields.b;
        uVar2._3_1_ = (__this->fields).topColor.fields.a;
        fVar6 = (local_d0.fields.position.fields.y - fVar9) / (fVar8 - fVar9);
        fVar7 = fVar6;
        if (1.0 < fVar6) {
          fVar7 = 1.0;
        }
        if (fVar6 < 0.0) {
          fVar7 = 0.0;
        }
        local_d0.fields.color.fields.rgba =
             ((int)(fVar7 * (float)(int)((uVar1 >> 0x10 & 0xff) - (uVar2 >> 0x10 & 0xff)) +
                   (float)(uVar2 >> 0x10 & 0xff)) & 0xffU) << 0x10 |
             (int)(fVar7 * (float)(int)((uVar1 >> 0x18) - (uVar2 >> 0x18)) + (float)(uVar2 >> 0x18))
             << 0x18 | (int)(fVar7 * (float)(int)((uVar1 & 0xff) - (uVar2 & 0xff)) +
                            (float)(uVar2 & 0xff)) & 0xffU |
                       ((int)(fVar7 * (float)(int)((uVar1 >> 8 & 0xff) - (uVar2 >> 8 & 0xff)) +
                             (float)(uVar2 >> 8 & 0xff)) & 0xffU) << 8;
        memcpy(&UStack_1b0,&local_d0,0x6c);
        UnityEngine_UI_VertexHelper__SetUIVertex(DAEILFBNGHE,&UStack_1b0,iVar5,(MethodInfo *)0x0);
        iVar5 = iVar5 + 1;
        iVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(DAEILFBNGHE,(MethodInfo *)0x0);
      } while (iVar5 < iVar3);
    }
  }
  return;
}

