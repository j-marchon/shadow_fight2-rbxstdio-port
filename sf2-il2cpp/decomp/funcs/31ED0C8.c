// NLPJLHOEAOE$$IDMAFKOMLBF @ RVA 0x31ED0C8

/* WARNING: Removing unreachable block (ram,0x032ed390) */

void NLPJLHOEAOE__IDMAFKOMLBF(NLPJLHOEAOE_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  System_String_o *LBKOHHHPNIP;
  System_String_o *FNLFDPAJACB;
  byte bVar1;
  int32_t ACCIHBHMFPN;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNodeList_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  AFFHKININGD_o *__this_00;
  MethodInfo *in_x7;
  DPDDOKKMMOM_o *pDVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  
                    /* try { // try from 032ed0c8 to 033ed153 has its CatchHandler @ 032ece94 */
  if ((DAT_04566db1 & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6310);
    DAT_04566db1 = 1;
  }
  if (((BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) &&
      (pDVar6 = (BANHBMINMMP->fields).CIHKJLAGDLJ, pDVar6 != (DPDDOKKMMOM_o *)0x0)) &&
     (pSVar2 = (pDVar6->fields).DMLGJFCNNJF, pSVar2 != (System_Xml_XmlNode_o *)0x0)) {
                    /* try { // try from 032ed154 to 033ed157 has its CatchHandler @ 032ed180 */
    LBKOHHHPNIP = (BANHBMINMMP->fields).CNHHLPPHNCO;
    FNLFDPAJACB = (BANHBMINMMP->fields).EEENDKPCOPF;
                    /* try { // try from 032ed158 to 033ed15f has its CatchHandler @ 032ed17c */
                    /* try { // try from 032ed160 to 033ed163 has its CatchHandler @ 032ece94 */
    pSVar3 = System_Xml_XmlNode__SelectNodes(pSVar2,StringLiteral_6310,(MethodInfo *)0x0);
                    /* try { // try from 032ed164 to 033ed167 has its CatchHandler @ 032ed170 */
    if (pSVar3 != (System_Xml_XmlNodeList_o *)0x0) {
                    /* try { // try from 032ed168 to 033ed197 has its CatchHandler @ 032ece94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed164 with catch @ 032ed170
                        */
      plVar4 = (long *)(*(pSVar3->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._8_GetEnumerator.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed0ac with catch @ 032ed174
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed060 with catch @ 032ed178
                        */
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed158 with catch @ 032ed17c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed154 with catch @ 032ed180
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ed004 with catch @ 032ed184
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecfa8 with catch @ 032ed188
                        */
      uVar10 = 0;
      do {
                    /* try { // try from 032ed198 to 033ed19b has its CatchHandler @ 032ed1ac */
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 032ed198 with catch @ 032ed1ac */
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 032ed1b4 to 033ed21b has its CatchHandler @ 032ed230 */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_032ed1e4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032ed1e4:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_032ed338;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_032ed320;
        }
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032ed234 to 033ed333 has its CatchHandler @ 032ed234
                       catch() { ... } // from try @ 032ed234 with catch @ 032ed234
                       catch() { ... } // from try @ 032ed470 with catch @ 032ed234
                       catch() { ... } // from try @ 032ed514 with catch @ 032ed234
                       catch() { ... } // from try @ 032ed51c with catch @ 032ed234
                       catch() { ... } // from try @ 032ed5d0 with catch @ 032ed234 */
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_032ed244;
            }
            uVar8 = uVar8 - 1;
                    /* try { // try from 032ed21c to 033ed227 has its CatchHandler @ 032ece94 */
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
                    /* try { // try from 032ed228 to 033ed22f has its CatchHandler @ 032ed230 */
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ed1b4 with catch @ 032ed230
                       catch(type#2 @ 00000000) { ... } // from try @ 032ed228 with catch @ 032ed230
                        */
LAB_032ed244:
        pSVar2 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
             ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar2);
          }
        }
        __this_00 = (AFFHKININGD_o *)thunk_FUN_01bda818(AFFHKININGD_TypeInfo);
        AFFHKININGD___ctor(__this_00,(MethodInfo *)0x0);
        ACCIHBHMFPN = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
        NLPJLHOEAOE__GKHEJJOADCD
                  (__this,__this_00,pSVar2,ACCIHBHMFPN,LBKOHHHPNIP,FNLFDPAJACB,BANHBMINMMP,in_x7);
        (*(BANHBMINMMP->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
                  (BANHBMINMMP,__this_00,(ulong)uVar10,
                   (BANHBMINMMP->klass->vtable)._21_GOLLEBBHEHE.method);
        uVar10 = uVar10 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
                    /* try { // try from 032ed334 to 033ed35b has its CatchHandler @ 032ed534 */
    if (uVar8 == 0) break;
LAB_032ed320:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032ed354;
    }
  }
LAB_032ed338:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032ed354:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

