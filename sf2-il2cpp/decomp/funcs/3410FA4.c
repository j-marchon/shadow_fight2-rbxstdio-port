// MGNPHCAAEIO.ONAGKGIEEGI$$HNIHOIAMDPC @ RVA 0x3410FA4

/* WARNING: Removing unreachable block (ram,0x0351134c) */

void MGNPHCAAEIO_ONAGKGIEEGI__HNIHOIAMDPC
               (MGNPHCAAEIO_ONAGKGIEEGI_o *__this,System_Xml_XmlNode_o *MNPCOGBCAED,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  LKPNOBFEAKD_o *__this_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04568085 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LKPNOBFEAKD_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568085 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HPJKPNJHGMF;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).MEMCHPHKGHF
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).BLAMCAPFOPD;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Clear
                  (pSVar2,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__)
        ;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).FEGHKKNNNLE;
        if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (System_Collections_Generic_Dictionary<object,_object>__Clear
                       (pSVar2,
                        Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_Clear__),
            MNPCOGBCAED != (System_Xml_XmlNode_o *)0x0)) &&
           (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (MNPCOGBCAED,
                                        (MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method),
           plVar3 != (long *)0x0)) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_03511114;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03511114:
            uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if ((uVar6 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) {
                return;
              }
              lVar5 = *plVar3;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_035112d8;
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_035112c0;
            }
            lVar5 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_03511174;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03511174:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
            __this_00 = (LKPNOBFEAKD_o *)thunk_FUN_01bda818(LKPNOBFEAKD_TypeInfo);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            LKPNOBFEAKD___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (__this_00 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields).HPJKPNJHGMF;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__)
            ;
            switch((__this_00->fields).DPLMPLDJKKB) {
            case 0:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).BLAMCAPFOPD;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 1:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).MEMCHPHKGHF;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 2:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).FEGHKKNNNLE;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              break;
            case 3:
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).BLAMCAPFOPD;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields).MEMCHPHKGHF;
              if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_object>__set_Item
                        (pSVar2,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                         (Il2CppObject *)__this_00,
                         Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_set_Item__
                        );
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_035112c0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_035112f4;
    }
  }
LAB_035112d8:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_035112f4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

