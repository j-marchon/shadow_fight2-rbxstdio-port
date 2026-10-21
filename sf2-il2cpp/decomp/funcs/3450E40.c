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

