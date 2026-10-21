// FDJKKAFIEFB$$LIKBHEDGLNO @ RVA 0x35B3B10

/* WARNING: Removing unreachable block (ram,0x036b3df4) */

void FDJKKAFIEFB__LIKBHEDGLNO
               (FDJKKAFIEFB_o *__this,UniRx_CollectionAddEvent_GIDPGJAAOJA__o JOIGDMABAKN,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  GIDPGJAAOJA_o *pGVar5;
  DBNEEHGBCJD_o *pDVar6;
  GIDPGJAAOJA_c *pGVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_String_o *pSVar12;
  undefined1 auVar13 [16];
  
  pGVar5 = JOIGDMABAKN.fields._Value_k__BackingField;
  if ((DAT_04568ead & 1) == 0) {
    FUN_01bab630(&Method_UniRx_CollectionAddEvent<GIDPGJAAOJA>_get_Value__,JOIGDMABAKN.fields._0_8_)
    ;
    FUN_01bab630(&GIDPGJAAOJA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    DAT_04568ead = 1;
  }
  pDVar6 = (__this->fields)._ELDCPOBNFJJ_k__BackingField;
  if (pDVar6 == (DBNEEHGBCJD_o *)0x0) {
    pSVar12 = (System_String_o *)0x0;
  }
  else {
    pSVar12 = (pDVar6->fields)._COIPKAKHDFP_k__BackingField;
  }
  if (pGVar5 != (GIDPGJAAOJA_o *)0x0) {
    pGVar7 = pGVar5->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)GIDPGJAAOJA_TypeInfo) {
          pVVar2 = pGVar7->vtable + *piVar10;
          goto LAB_036b3c0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pGVar5,GIDPGJAAOJA_TypeInfo,0);
LAB_036b3c0c:
    plVar3 = (long *)(*pVVar2->methodPtr)(pGVar5,pSVar12,pVVar2->method);
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)
               (piVar11 + -2) ==
              System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036b3c78;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01b81914(plVar3,
                            System_Collections_Generic_IEnumerable<KeyValuePair<string,_string>>_TypeInfo
                            ,0);
LAB_036b3c78:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036b3cf0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_036b3cf0:
        uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar9 & 1) == 0) goto LAB_036b3d74;
        lVar8 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)
                 (piVar11 + -2) ==
                System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_036b3d4c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01b81914(plVar3,
                              System_Collections_Generic_IEnumerator<KeyValuePair<string,_string>>_TypeInfo
                              ,0);
LAB_036b3d4c:
        auVar13 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        FDJKKAFIEFB__AJKJDLLNCNM(__this,auVar13._0_8_,auVar13._8_8_,(MethodInfo *)auVar13._8_8_);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_036b3d74:
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 036b3d90 to 037b3e23 has its CatchHandler @ 036b3d90
                       catch() { ... } // from try @ 036b3d90 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3e48 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3ea8 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3ed0 with catch @ 036b3d90
                       catch() { ... } // from try @ 036b3f00 with catch @ 036b3d90 */
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_036b3dc8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_036b3dc8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}

