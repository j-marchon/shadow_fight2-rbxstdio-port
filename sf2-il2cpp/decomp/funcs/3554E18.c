// DDFDPLHKGKB$$GBCBKEDFNGJ @ RVA 0x3554E18

/* WARNING: Removing unreachable block (ram,0x036553ac) */

void DDFDPLHKGKB__GBCBKEDFNGJ
               (UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               System_Collections_Generic_List_Vector2__o *KEMHFHOJFCB,float PCBIKNDPPAD,
               UnityEngine_Color_o GKBNFBINIIP,bool FFLLFNDLJLE,MethodInfo *method)

{
  int32_t index;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_UIVertex__o *__this;
  System_Collections_Generic_List_Vector2__o *__this_00;
  System_Math_c *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x0;
  System_Collections_Generic_List_int__o *indices;
  int iVar3;
  UnityEngine_Vector2_array *pUVar4;
  UnityEngine_UIVertex_array *pUVar5;
  int iVar6;
  uint uVar7;
  MethodInfo_274F1F4 *pMVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o UVar20;
  UnityEngine_Vector2_o UVar21;
  UnityEngine_Vector2_o UVar22;
  UnityEngine_Vector2_o UVar23;
  UnityEngine_Vector2_o EEGKJKNENDE;
  UnityEngine_Vector2_o ECBPGANPEPD;
  UnityEngine_UIVertex_o UStack_260;
  UnityEngine_UIVertex_o UStack_1f0;
  undefined1 auStack_180 [112];
  UnityEngine_UIVertex_o UStack_110;
  
                    /* try { // try from 03654e2c to 03754e33 has its CatchHandler @ 03654edc */
                    /* try { // try from 03654e34 to 03754e4b has its CatchHandler @ 03654a24 */
                    /* try { // try from 03654e4c to 03754e63 has its CatchHandler @ 03654ecc */
                    /* try { // try from 03654e64 to 03754ea7 has its CatchHandler @ 03654a24 */
  if ((DAT_04568b62 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>__ctor__);
                    /* try { // try from 03654ea8 to 03754eb7 has its CatchHandler @ 03654ecc */
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_get_Item__);
                    /* try { // try from 03654eb8 to 03754ed3 has its CatchHandler @ 03654edc */
                    /* catch() { ... } // from try @ 03654e14 with catch @ 03654ec0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Vector2>_set_Item__);
                    /* catch() { ... } // from try @ 03654e4c with catch @ 03654ecc
                       catch() { ... } // from try @ 03654ea8 with catch @ 03654ecc */
    FUN_01bab630(&System_Collections_Generic_List<UIVertex>_TypeInfo);
                    /* try { // try from 03654ed4 to 03754edf has its CatchHandler @ 03654a24 */
    FUN_01bab630(&System_Collections_Generic_List<Vector2>_TypeInfo);
                    /* catch() { ... } // from try @ 03654e2c with catch @ 03654edc
                       catch() { ... } // from try @ 03654eb8 with catch @ 03654edc */
    DAT_04568b62 = 1;
  }
  if (BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_UIVertex__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<UIVertex>_TypeInfo);
    System_Collections_Generic_List<UIVertex>___ctor
              (__this,Method_System_Collections_Generic_List<UIVertex>__ctor__);
    __this_00 = (System_Collections_Generic_List_Vector2__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<Vector2>_TypeInfo);
    System_Collections_Generic_List<Vector2>___ctor
              (__this_00,Method_System_Collections_Generic_List<Vector2>__ctor__);
    if (KEMHFHOJFCB != (System_Collections_Generic_List_Vector2__o *)0x0) {
      iVar3 = (KEMHFHOJFCB->fields)._size;
      if (1 < iVar3) {
        UVar18 = System_Collections_Generic_List<Vector2>__get_Item
                           (KEMHFHOJFCB,iVar3 + -1,
                            Method_System_Collections_Generic_List<Vector2>_get_Item__);
        UVar19 = System_Collections_Generic_List<Vector2>__get_Item
                           (KEMHFHOJFCB,0,Method_System_Collections_Generic_List<Vector2>_get_Item__
                           );
        iVar3 = (KEMHFHOJFCB->fields)._size;
        if (1 < iVar3) {
          uVar7 = 1;
          do {
            UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                               (KEMHFHOJFCB,uVar7,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            iVar3 = uVar7 - 1;
            UVar21 = System_Collections_Generic_List<Vector2>__get_Item
                               (KEMHFHOJFCB,iVar3,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            lVar2 = Method_System_Collections_Generic_List<Vector2>_Add__;
            if (__this_00 == (System_Collections_Generic_List_Vector2__o *)0x0) goto LAB_036556d4;
            pUVar4 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pUVar4 == (UnityEngine_Vector2_array *)0x0) goto LAB_036556d4;
            uVar1 = (__this_00->fields)._size;
            UVar22.fields.x = UVar20.fields.x - UVar21.fields.x;
            UVar22.fields.y = UVar20.fields.y - UVar21.fields.y;
            if (uVar1 < (uint)pUVar4->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pUVar4->m_Items[(int)uVar1].fields.x = UVar22.fields.x;
              pUVar4->m_Items[(int)uVar1].fields.y = UVar22.fields.y;
            }
            else {
              System_Collections_Generic_List<Vector2>__AddWithResize
                        (__this_00,UVar22,
                         *(MethodInfo_2759B90 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,iVar3,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            UVar21 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,iVar3,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            fVar13 = UVar21.fields.x;
            if (DAT_045602fb == '\0') {
              FUN_01bab630((ulong)UVar21.fields & 0xffffffff,UVar21.fields.y,&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar9 = UVar20.fields.y;
                    /* try { // try from 03655098 to 0375512f has its CatchHandler @ 03655098
                       catch() { ... } // from try @ 03655098 with catch @ 03655098
                       catch() { ... } // from try @ 036551ec with catch @ 03655098
                       catch() { ... } // from try @ 0365523c with catch @ 03655098
                       catch() { ... } // from try @ 03655250 with catch @ 03655098
                       catch() { ... } // from try @ 036552b8 with catch @ 03655098
                       catch() { ... } // from try @ 03655310 with catch @ 03655098 */
            fVar12 = SQRT(fVar9 * fVar9 + fVar13 * fVar13);
            if (fVar12 <= 1e-05) {
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
              }
              fVar9 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              fVar13 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
            }
            else {
              fVar9 = -fVar9 / fVar12;
              fVar13 = fVar13 / fVar12;
            }
            UVar20.fields.y = fVar13;
            UVar20.fields.x = fVar9;
            System_Collections_Generic_List<Vector2>__set_Item
                      (__this_00,iVar3,UVar20,
                       Method_System_Collections_Generic_List<Vector2>_set_Item__);
            UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,iVar3,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
                    /* try { // try from 03655130 to 0375514f has its CatchHandler @ 03655258 */
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if ((1 < uVar7) &&
               (SQRT(UVar20.fields.x * UVar20.fields.x + UVar20.fields.y * UVar20.fields.y) == 0.0))
            {
              UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                                 (__this_00,uVar7 - 2,
                                  Method_System_Collections_Generic_List<Vector2>_get_Item__);
                    /* try { // try from 0365516c to 03755173 has its CatchHandler @ 03655250 */
              System_Collections_Generic_List<Vector2>__set_Item
                        (__this_00,iVar3,UVar20,
                         Method_System_Collections_Generic_List<Vector2>_set_Item__);
            }
            iVar3 = (KEMHFHOJFCB->fields)._size;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar3);
        }
        if (0 < iVar3 + -2) {
                    /* try { // try from 03655198 to 0375519f has its CatchHandler @ 03655278 */
          if (__this_00 == (System_Collections_Generic_List_Vector2__o *)0x0) goto LAB_036556d4;
          iVar3 = iVar3 + -1;
          do {
                    /* try { // try from 036551b0 to 037551bb has its CatchHandler @ 03655270 */
            iVar6 = iVar3 + -2;
            UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,iVar6,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
                    /* try { // try from 036551e4 to 037551eb has its CatchHandler @ 03655264 */
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 036551ec to 03755237 has its CatchHandler @ 03655098 */
            iVar3 = iVar3 + -1;
            if (SQRT(UVar20.fields.x * UVar20.fields.x + UVar20.fields.y * UVar20.fields.y) == 0.0)
            {
              UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                                 (__this_00,iVar3,
                                  Method_System_Collections_Generic_List<Vector2>_get_Item__);
              System_Collections_Generic_List<Vector2>__set_Item
                        (__this_00,iVar6,UVar20,
                         Method_System_Collections_Generic_List<Vector2>_set_Item__);
            }
          } while (1 < iVar3);
          iVar3 = (KEMHFHOJFCB->fields)._size;
        }
                    /* try { // try from 03655238 to 0375523b has its CatchHandler @ 03655274 */
        if (0 < iVar3) {
                    /* try { // try from 0365523c to 03755243 has its CatchHandler @ 03655098 */
          if (__this_00 == (System_Collections_Generic_List_Vector2__o *)0x0) goto LAB_036556d4;
                    /* try { // try from 03655244 to 03755247 has its CatchHandler @ 03655254 */
                    /* try { // try from 03655248 to 0375524f has its CatchHandler @ 03655264 */
                    /* catch() { ... } // from try @ 0365516c with catch @ 03655250
                       try { // try from 03655250 to 03755293 has its CatchHandler @ 03655098 */
                    /* catch() { ... } // from try @ 03655244 with catch @ 03655254 */
                    /* catch() { ... } // from try @ 03655130 with catch @ 03655258 */
                    /* catch() { ... } // from try @ 036551e4 with catch @ 03655264
                       catch() { ... } // from try @ 03655248 with catch @ 03655264 */
          uVar7 = 0;
                    /* catch() { ... } // from try @ 036551b0 with catch @ 03655270 */
                    /* catch() { ... } // from try @ 03655238 with catch @ 03655274 */
                    /* catch() { ... } // from try @ 03655198 with catch @ 03655278 */
          iVar6 = 1;
          do {
                    /* try { // try from 03655294 to 03755297 has its CatchHandler @ 036552ec */
            index = 0;
            if (uVar7 != 0) {
              index = uVar7 - 1;
            }
            UVar20 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,index,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
                    /* try { // try from 036552b0 to 037552b7 has its CatchHandler @ 03655324 */
                    /* try { // try from 036552b8 to 037552d3 has its CatchHandler @ 03655098 */
            UVar21 = System_Collections_Generic_List<Vector2>__get_Item
                               (__this_00,uVar7 - ((KEMHFHOJFCB->fields)._size + -1 <= (int)uVar7),
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
                    /* try { // try from 036552d4 to 037552d7 has its CatchHandler @ 036552f8 */
                    /* try { // try from 036552e4 to 0375530f has its CatchHandler @ 03655324 */
            UVar22 = System_Collections_Generic_List<Vector2>__get_Item
                               (KEMHFHOJFCB,uVar7,
                                Method_System_Collections_Generic_List<Vector2>_get_Item__);
            fVar13 = UVar22.fields.x;
                    /* catch() { ... } // from try @ 03655294 with catch @ 036552ec */
                    /* catch() { ... } // from try @ 036552d4 with catch @ 036552f8 */
            if (FFLLFNDLJLE) {
              UVar23 = System_Collections_Generic_List<Vector2>__get_Item
                                 (KEMHFHOJFCB,0,
                                  Method_System_Collections_Generic_List<Vector2>_get_Item__);
                    /* try { // try from 03655310 to 0375531b has its CatchHandler @ 03655098 */
              fVar12 = (fVar13 - UVar23.fields.x) / (UVar18.fields.x - UVar19.fields.x);
            }
            else {
                    /* try { // try from 0365531c to 03755323 has its CatchHandler @ 03655324 */
              fVar12 = 1.0;
                    /* catch() { ... } // from try @ 036552b0 with catch @ 03655324
                       catch() { ... } // from try @ 036552e4 with catch @ 03655324
                       catch() { ... } // from try @ 0365531c with catch @ 03655324 */
              if ((uVar7 & 1) != 0) {
                fVar12 = 0.0;
              }
            }
            if (DAT_0456033c == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_0456033c = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar16 = UVar20.fields.x;
            fVar17 = UVar20.fields.y;
            fVar10 = UVar21.fields.x;
            fVar15 = UVar21.fields.y;
            fVar9 = SQRT((fVar16 * fVar16 + fVar17 * fVar17) * (fVar10 * fVar10 + fVar15 * fVar15));
            fVar14 = 0.0;
            if (1e-15 <= fVar9) {
              fVar9 = (fVar16 * fVar10 + fVar17 * fVar15) / fVar9;
              if (fVar9 < -1.0) {
                fVar9 = -1.0;
              }
              if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036553bc to 03755457 has its CatchHandler @ 036553bc
                       catch() { ... } // from try @ 036553bc with catch @ 036553bc
                       catch() { ... } // from try @ 036554ec with catch @ 036553bc
                       catch() { ... } // from try @ 03655568 with catch @ 036553bc
                       catch() { ... } // from try @ 036555ac with catch @ 036553bc */
                thunk_FUN_01ba7564();
              }
              dVar11 = acos((double)fVar9);
              fVar14 = (float)dVar11 * 57.29578;
            }
            fVar9 = cosf(fVar14 * 0.017453292 * 0.5);
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar10 = fVar16 + fVar10;
            fVar15 = fVar17 + fVar15;
            fVar14 = SQRT(fVar10 * fVar10 + fVar15 * fVar15);
            if (fVar14 <= 1e-05) {
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                    /* try { // try from 03655458 to 03755477 has its CatchHandler @ 03655568 */
                DAT_0455fa75 = '\x01';
              }
              fVar10 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              fVar15 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
            }
            else {
              fVar10 = fVar10 / fVar14;
              fVar15 = fVar15 / fVar14;
            }
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
            method_00 = System_Math_TypeInfo;
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              method_00 = (System_Math_c *)thunk_FUN_01ba7564();
            }
            fVar14 = (float)iVar6;
            fVar10 = ((fVar10 * fVar14) / ABS(fVar9)) * PCBIKNDPPAD;
            fVar9 = ((fVar15 * fVar14) / ABS(fVar9)) * PCBIKNDPPAD;
                    /* try { // try from 036554c8 to 037554eb has its CatchHandler @ 0365556c */
            if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) == 0.0) {
              fVar10 = fVar16 * fVar14 * PCBIKNDPPAD;
              fVar9 = fVar17 * fVar14 * PCBIKNDPPAD;
                    /* try { // try from 036554ec to 0375555f has its CatchHandler @ 036553bc */
              iVar6 = -iVar6;
            }
            UVar21.fields.x = fVar13 - fVar10 * 0.5;
            UVar21.fields.y = UVar22.fields.y - fVar9 * 0.5;
            UVar23.fields.y = 0.0;
            UVar23.fields.x = fVar12;
            DDFDPLHKGKB__AICNJCFALEF(&UStack_1f0,UVar21,UVar23,GKBNFBINIIP,(MethodInfo *)method_00);
            lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
            if (__this == (System_Collections_Generic_List_UIVertex__o *)0x0) goto LAB_036556d4;
            memcpy(auStack_180,&UStack_1f0,0x6c);
            pUVar5 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto LAB_036556d4;
                    /* try { // try from 03655560 to 03755567 has its CatchHandler @ 0365556c */
            uVar1 = (__this->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03655458 with catch @ 03655568
                       try { // try from 03655568 to 03755583 has its CatchHandler @ 036553bc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036554c8 with catch @ 0365556c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03655560 with catch @ 0365556c
                        */
            if (uVar1 < (uint)pUVar5->max_length) {
                    /* try { // try from 03655584 to 03755587 has its CatchHandler @ 03655594 */
              (__this->fields)._size = uVar1 + 1;
              method_01 = memcpy(&pUVar5->m_Items[0].fields.position + (long)(int)uVar1 * 9,
                                 auStack_180,0x6c);
            }
            else {
                    /* catch() { ... } // from try @ 03655584 with catch @ 03655594 */
                    /* try { // try from 036555a0 to 037555ab has its CatchHandler @ 036555c0 */
              pMVar8 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                    /* try { // try from 036555ac to 037555b7 has its CatchHandler @ 036553bc */
              memcpy(&UStack_110,auStack_180,0x6c);
                    /* try { // try from 036555b8 to 037555bf has its CatchHandler @ 036555c0 */
              System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_110,pMVar8);
              method_01 = extraout_x0;
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036555a0 with catch @ 036555c0
                       catch(type#2 @ 00000000) { ... } // from try @ 036555b8 with catch @ 036555c0
                        */
            EEGKJKNENDE.fields.x = fVar13 + fVar10 * 0.5;
            EEGKJKNENDE.fields.y = UVar22.fields.y + fVar9 * 0.5;
            ECBPGANPEPD.fields.y = 1.0;
            ECBPGANPEPD.fields.x = fVar12;
            DDFDPLHKGKB__AICNJCFALEF(&UStack_260,EEGKJKNENDE,ECBPGANPEPD,GKBNFBINIIP,method_01);
            lVar2 = Method_System_Collections_Generic_List<UIVertex>_Add__;
            memcpy(auStack_180,&UStack_260,0x6c);
            pUVar5 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pUVar5 == (UnityEngine_UIVertex_array *)0x0) goto LAB_036556d4;
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pUVar5->max_length) {
              (__this->fields)._size = uVar1 + 1;
              memcpy(&pUVar5->m_Items[0].fields.position + (long)(int)uVar1 * 9,auStack_180,0x6c);
            }
            else {
              pMVar8 = *(MethodInfo_274F1F4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
              memcpy(&UStack_110,auStack_180,0x6c);
              System_Collections_Generic_List<UIVertex>__AddWithResize(__this,&UStack_110,pMVar8);
            }
            iVar3 = (KEMHFHOJFCB->fields)._size;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar3);
        }
        indices = LLCIFEBJPCL__HPJCLJPIDEO(iVar3 * 2 + -2,(MethodInfo *)0x0);
        UnityEngine_UI_VertexHelper__AddUIVertexStream(BALEEENOIJA,__this,indices,(MethodInfo *)0x0)
        ;
      }
      return;
    }
  }
LAB_036556d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

