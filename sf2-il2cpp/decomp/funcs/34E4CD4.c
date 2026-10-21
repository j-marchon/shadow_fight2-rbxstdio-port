// Nekki.SF2.GUI.ResolutionImage$$TryImageWithPaths @ RVA 0x34E4CD4

/* WARNING: Removing unreachable block (ram,0x035e4f90) */

bool Nekki_SF2_GUI_ResolutionImage__TryImageWithPaths
               (Nekki_SF2_GUI_ResolutionImage_o *__this,System_String_o *HCAAAAMDCNO,
               System_Collections_Generic_IEnumerable_string__o *KGCGJCOHIIB,MethodInfo *method)

{
  float *pfVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_IEnumerable_string__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  UnityEngine_Vector3_array *x;
  
  if ((DAT_04568754 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568754 = 1;
  }
                    /* try { // try from 035e4d4c to 036e4dd7 has its CatchHandler @ 035e4d4c
                       catch() { ... } // from try @ 035e4d4c with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4df4 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e18 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e40 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e80 with catch @ 035e4d4c */
  (__this->fields)._TexturePath = HCAAAAMDCNO;
  thunk_FUN_01c20e04(&(__this->fields)._TexturePath,HCAAAAMDCNO);
  if (KGCGJCOHIIB == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = KGCGJCOHIIB->klass;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar2;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_035e4dac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar5 = (VirtualInvokeData *)
           FUN_01b81914(KGCGJCOHIIB,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_035e4dac:
  plVar6 = (long *)(*pVVar5->methodPtr)(KGCGJCOHIIB,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035e4dd8 to 036e4ddf has its CatchHandler @ 035e4e24 */
  pfVar1 = &(__this->fields).super.m_PixelsPerUnitMultiplier;
  do {
    do {
      lVar9 = *plVar6;
                    /* try { // try from 035e4dec to 036e4df3 has its CatchHandler @ 035e4e20 */
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
                    /* try { // try from 035e4df4 to 036e4e13 has its CatchHandler @ 035e4d4c */
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4dd8 with catch @ 035e4e24
                        */
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035e4e30;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 035e4e14 to 036e4e17 has its CatchHandler @ 035e4e1c */
                    /* try { // try from 035e4e18 to 036e4e3b has its CatchHandler @ 035e4d4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4e14 with catch @ 035e4e1c
                        */
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4dec with catch @ 035e4e20
                        */
LAB_035e4e30:
      bVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 035e4e3c to 036e4e3f has its CatchHandler @ 035e4e68 */
                    /* try { // try from 035e4e40 to 036e4e77 has its CatchHandler @ 035e4d4c */
      if ((bVar3 & 1) == 0) {
        bVar3 = 0;
        goto joined_r0x035e4f0c;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar12 + -2) ==
              System_Collections_Generic_IEnumerator<string>_TypeInfo) {
                    /* try { // try from 035e4e8c to 036e4e93 has its CatchHandler @ 035e4e94 */
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035e4e90;
          }
                    /* catch() { ... } // from try @ 035e4e3c with catch @ 035e4e68 */
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 035e4e78 to 036e4e7f has its CatchHandler @ 035e4e94 */
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
                    /* try { // try from 035e4e80 to 036e4e8b has its CatchHandler @ 035e4d4c */
LAB_035e4e90:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e4e78 with catch @ 035e4e94
                       catch(type#2 @ 00000000) { ... } // from try @ 035e4e8c with catch @ 035e4e94
                        */
      CJNHFNHJHPE = (System_String_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    } while (bVar4);
    *(System_String_o **)pfVar1 = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pfVar1,CJNHFNHJHPE);
    (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
              (__this,(__this->klass->vtable)._91_RefreshSprite.method);
    x = (__this->fields).super.super.m_Corners;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  } while (!bVar4);
joined_r0x035e4f0c:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_035e4f5c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_035e4f5c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return (bool)(bVar3 & 1);
}

