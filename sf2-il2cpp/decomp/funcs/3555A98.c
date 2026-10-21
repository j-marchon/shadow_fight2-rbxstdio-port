// DDFDPLHKGKB$$MENPNKHNDCN @ RVA 0x3555A98

void DDFDPLHKGKB__MENPNKHNDCN
               (UnityEngine_UI_VertexHelper_o *AEMNBFJFKAF,UnityEngine_Vector2_o EEGKJKNENDE,
               UnityEngine_Vector2_o KGAENKKEEPK,float CIBIKDNNBAM,float IGCGOHHCMHD,
               int32_t KBDPEGCICFC,UnityEngine_Color_o GKBNFBINIIP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_UIVertex__o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_int__o *indices;
  UnityEngine_UIVertex_array *pUVar3;
  MethodInfo_274F1F4 *pMVar4;
  int iVar5;
  UnityEngine_Vector2_o EEGKJKNENDE_00;
  UnityEngine_Vector2_o ECBPGANPEPD;
  UnityEngine_UIVertex_o UStack_250;
  UnityEngine_UIVertex_o UStack_1e0;
  undefined1 auStack_170 [112];
  UnityEngine_UIVertex_o UStack_100;
  float local_48;
  float local_44;
  
                    /* try { // try from 03655a98 to 03755a9f has its CatchHandler @ 03655b90 */
                    /* try { // try from 03655ab0 to 03755ab3 has its CatchHandler @ 03655b7c */
                    /* try { // try from 03655adc to 03755ae7 has its CatchHandler @ 03655b8c */
  if ((DAT_04568b64 & 1) == 0) {
                    /* try { // try from 03655ae8 to 03755b5b has its CatchHandler @ 03655958 */
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
    DAT_04568b64 = 1;
  }
  if (AEMNBFJFKAF != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(AEMNBFJFKAF,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_UIVertex__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
    System_Collections_Generic_List<UIVertex>___ctor
              (__this,Method_System_Collections_Generic_List<UIVertex>__ctor__);
                    /* try { // try from 03655b5c to 03755b5f has its CatchHandler @ 03655b9c */
                    /* try { // try from 03655b60 to 03755b67 has its CatchHandler @ 03655958 */
                    /* try { // try from 03655b68 to 03755b6b has its CatchHandler @ 03655b84 */
                    /* try { // try from 03655b6c to 03755b73 has its CatchHandler @ 03655b90 */
                    /* try { // try from 03655b74 to 03755b77 has its CatchHandler @ 03655b8c */
                    /* try { // try from 03655b78 to 03755bbb has its CatchHandler @ 03655958 */
                    /* catch() { ... } // from try @ 03655ab0 with catch @ 03655b7c */
    DDFDPLHKGKB__AICNJCFALEF
              (&UStack_1e0,EEGKJKNENDE,(UnityEngine_Vector2_o)0x3f0000003f000000,GKBNFBINIIP,
               method_00);
    lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
                    /* catch() { ... } // from try @ 03655a40 with catch @ 03655b80 */
    if (__this != (System_Collections_Generic_List_UIVertex__o *)0x0) {
                    /* catch() { ... } // from try @ 03655b68 with catch @ 03655b84 */
                    /* catch() { ... } // from try @ 03655a04 with catch @ 03655b88 */
                    /* catch() { ... } // from try @ 03655adc with catch @ 03655b8c
                       catch() { ... } // from try @ 03655b74 with catch @ 03655b8c */
                    /* catch() { ... } // from try @ 03655a98 with catch @ 03655b90
                       catch() { ... } // from try @ 03655b6c with catch @ 03655b90 */
                    /* catch() { ... } // from try @ 03655b5c with catch @ 03655b9c */
      memcpy(auStack_170,&UStack_1e0,0x6c);
                    /* catch() { ... } // from try @ 03655a80 with catch @ 03655ba0 */
                    /* catch() { ... } // from try @ 03655a6c with catch @ 03655ba4 */
      pUVar3 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pUVar3 != (UnityEngine_UIVertex_array *)0x0) {
        uVar1 = (__this->fields)._size;
                    /* try { // try from 03655bbc to 03755bbf has its CatchHandler @ 03655c0c */
        if (uVar1 < (uint)pUVar3->max_length) {
                    /* try { // try from 03655bd0 to 03755bd7 has its CatchHandler @ 03655c44 */
                    /* try { // try from 03655bd8 to 03755bef has its CatchHandler @ 03655958 */
          (__this->fields)._size = uVar1 + 1;
          memcpy(&pUVar3->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_170,0x6c);
        }
        else {
                    /* try { // try from 03655bf0 to 03755bf3 has its CatchHandler @ 03655c18 */
          pMVar4 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                    /* try { // try from 03655c04 to 03755c2f has its CatchHandler @ 03655c44 */
          memcpy(&UStack_100,auStack_170,0x6c);
                    /* catch() { ... } // from try @ 03655bbc with catch @ 03655c0c */
          System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_100,pMVar4);
        }
                    /* catch() { ... } // from try @ 03655bf0 with catch @ 03655c18 */
        if (-1 < KBDPEGCICFC) {
          iVar5 = 0;
                    /* try { // try from 03655c30 to 03755c3b has its CatchHandler @ 03655958 */
          do {
                    /* try { // try from 03655c3c to 03755c43 has its CatchHandler @ 03655c44 */
                    /* catch() { ... } // from try @ 03655bd0 with catch @ 03655c44
                       catch() { ... } // from try @ 03655c04 with catch @ 03655c44
                       catch() { ... } // from try @ 03655c3c with catch @ 03655c44 */
            sincosf(((IGCGOHHCMHD - CIBIKDNNBAM) / (float)KBDPEGCICFC) * (float)iVar5 + CIBIKDNNBAM,
                    &local_44,&local_48);
            EEGKJKNENDE_00.fields.x = EEGKJKNENDE.fields.x + KGAENKKEEPK.fields.x * local_48;
            EEGKJKNENDE_00.fields.y = EEGKJKNENDE.fields.y + KGAENKKEEPK.fields.y * local_44;
            ECBPGANPEPD.fields.x = local_48 * 0.5 + 0.5;
            ECBPGANPEPD.fields.y = local_44 * 0.5 + 0.5;
            DDFDPLHKGKB__AICNJCFALEF(&UStack_250,EEGKJKNENDE_00,ECBPGANPEPD,GKBNFBINIIP,method_01);
            lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
            memcpy(auStack_170,&UStack_250,0x6c);
            pUVar3 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pUVar3 == (UnityEngine_UIVertex_array *)0x0) goto LAB_03655d74;
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pUVar3->max_length) {
              (__this->fields)._size = uVar1 + 1;
              memcpy(&pUVar3->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_170,0x6c);
            }
            else {
              pMVar4 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              memcpy(&UStack_100,auStack_170,0x6c);
              System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_100,pMVar4);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 <= KBDPEGCICFC);
        }
        indices = LLCIFEBJPCL__NCOODIBHJJN(KBDPEGCICFC,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexStream(AEMNBFJFKAF,__this,indices,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
LAB_03655d74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

