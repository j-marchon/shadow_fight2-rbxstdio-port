// DDFDPLHKGKB$$GMAHCDEMNOG @ RVA 0x35556D8

/* WARNING: Removing unreachable block (ram,0x0365585c) */

void DDFDPLHKGKB__GMAHCDEMNOG
               (UnityEngine_UI_VertexHelper_o *BALEEENOIJA,UnityEngine_Vector2_o EEGKJKNENDE,
               UnityEngine_Vector2_o KGAENKKEEPK,float PCBIKNDPPAD,float CIBIKDNNBAM,
               float IGCGOHHCMHD,int32_t KBDPEGCICFC,UnityEngine_Color_o GKBNFBINIIP,
               UnityEngine_Color_o CJAPKHIHMEJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  System_Collections_Generic_List_UIVertex__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x0;
  System_Collections_Generic_List_int__o *indices;
  UnityEngine_UIVertex_array *pUVar5;
  MethodInfo_274F1F4 *pMVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o ECBPGANPEPD;
  UnityEngine_Vector2_o ECBPGANPEPD_00;
  UnityEngine_Vector2_o EEGKJKNENDE_00;
  UnityEngine_Vector2_o EEGKJKNENDE_01;
  UnityEngine_Color_o GKBNFBINIIP_00;
  UnityEngine_Color_o GKBNFBINIIP_01;
  UnityEngine_UIVertex_o UStack_250;
  UnityEngine_UIVertex_o UStack_1e0;
  undefined1 auStack_170 [112];
  UnityEngine_UIVertex_o UStack_100;
  float local_48;
  float local_44;
  
  fVar10 = KGAENKKEEPK.fields.y;
  fVar9 = KGAENKKEEPK.fields.x;
  if ((DAT_04568b63 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_04568b63 = 1;
  }
  if (BALEEENOIJA == (UnityEngine_UI_VertexHelper_o *)0x0) {
LAB_03655a94:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
  __this = (System_Collections_Generic_List_UIVertex__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
  System_Collections_Generic_List<UIVertex>___ctor
            (__this,Method_System_Collections_Generic_List<UIVertex>__ctor__);
  if (-1 < KBDPEGCICFC) {
    iVar7 = 0;
    do {
      sincosf(((IGCGOHHCMHD - CIBIKDNNBAM) / (float)KBDPEGCICFC) * (float)iVar7 + CIBIKDNNBAM,
              &local_44,&local_48);
      fVar4 = local_44;
      fVar3 = local_48;
      fVar8 = (float)iVar7 / (float)KBDPEGCICFC;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      fVar11 = GKBNFBINIIP.fields.r + (CJAPKHIHMEJ.fields.r - GKBNFBINIIP.fields.r) * fVar8;
      fVar13 = GKBNFBINIIP.fields.g + (CJAPKHIHMEJ.fields.g - GKBNFBINIIP.fields.g) * fVar8;
      ECBPGANPEPD.fields.x = local_48 * 0.5 + 0.5;
      fVar12 = GKBNFBINIIP.fields.b + (CJAPKHIHMEJ.fields.b - GKBNFBINIIP.fields.b) * fVar8;
      ECBPGANPEPD.fields.y = local_44 * 0.5 + 0.5;
      fVar8 = GKBNFBINIIP.fields.a + (CJAPKHIHMEJ.fields.a - GKBNFBINIIP.fields.a) * fVar8;
      EEGKJKNENDE_00.fields.x = EEGKJKNENDE.fields.x + fVar9 * local_48;
      EEGKJKNENDE_00.fields.y = EEGKJKNENDE.fields.y + fVar10 * local_44;
      GKBNFBINIIP_00.fields.g = fVar13;
      GKBNFBINIIP_00.fields.r = fVar11;
      GKBNFBINIIP_00.fields.a = fVar8;
      GKBNFBINIIP_00.fields.b = fVar12;
      DDFDPLHKGKB__AICNJCFALEF(&UStack_1e0,EEGKJKNENDE_00,ECBPGANPEPD,GKBNFBINIIP_00,method_00);
      lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
      if (__this == (System_Collections_Generic_List_UIVertex__o *)0x0) goto LAB_03655a94;
      memcpy(auStack_170,&UStack_1e0,0x6c);
      pUVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto LAB_03655a94;
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pUVar5->max_length) {
        (__this->fields)._size = uVar1 + 1;
        method_01 = memcpy(&pUVar5->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_170,
                           0x6c);
      }
      else {
        pMVar6 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                    /* try { // try from 03655958 to 03755a03 has its CatchHandler @ 03655958
                       catch() { ... } // from try @ 03655958 with catch @ 03655958
                       catch() { ... } // from try @ 03655ae8 with catch @ 03655958
                       catch() { ... } // from try @ 03655b60 with catch @ 03655958
                       catch() { ... } // from try @ 03655b78 with catch @ 03655958
                       catch() { ... } // from try @ 03655bd8 with catch @ 03655958
                       catch() { ... } // from try @ 03655c30 with catch @ 03655958 */
        memcpy(&UStack_100,auStack_170,0x6c);
        System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_100,pMVar6);
        method_01 = extraout_x0;
      }
      EEGKJKNENDE_01.fields.x = EEGKJKNENDE.fields.x + (fVar9 - PCBIKNDPPAD) * fVar3;
      EEGKJKNENDE_01.fields.y = EEGKJKNENDE.fields.y + (fVar10 - PCBIKNDPPAD) * fVar4;
      ECBPGANPEPD_00.fields.x = (1.0 - PCBIKNDPPAD / fVar9) * fVar3 * 0.5 + 0.5;
      ECBPGANPEPD_00.fields.y = (1.0 - PCBIKNDPPAD / fVar10) * fVar4 * 0.5 + 0.5;
      GKBNFBINIIP_01.fields.g = fVar13;
      GKBNFBINIIP_01.fields.r = fVar11;
      GKBNFBINIIP_01.fields.a = fVar8;
      GKBNFBINIIP_01.fields.b = fVar12;
      DDFDPLHKGKB__AICNJCFALEF(&UStack_250,EEGKJKNENDE_01,ECBPGANPEPD_00,GKBNFBINIIP_01,method_01);
      lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
      memcpy(auStack_170,&UStack_250,0x6c);
      pUVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto LAB_03655a94;
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pUVar5->max_length) {
                    /* try { // try from 03655a04 to 03755a23 has its CatchHandler @ 03655b88 */
        (__this->fields)._size = uVar1 + 1;
        memcpy(&pUVar5->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_170,0x6c);
      }
      else {
        pMVar6 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        memcpy(&UStack_100,auStack_170,0x6c);
        System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_100,pMVar6);
      }
      iVar7 = iVar7 + 1;
                    /* try { // try from 03655a40 to 03755a47 has its CatchHandler @ 03655b80 */
    } while (iVar7 <= KBDPEGCICFC);
  }
  indices = LLCIFEBJPCL__HPJCLJPIDEO(KBDPEGCICFC << 1,(MethodInfo *)0x0);
  UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,__this,indices,(MethodInfo *)0x0);
                    /* try { // try from 03655a6c to 03755a73 has its CatchHandler @ 03655ba4 */
                    /* try { // try from 03655a80 to 03755a8b has its CatchHandler @ 03655ba0 */
  return;
}

