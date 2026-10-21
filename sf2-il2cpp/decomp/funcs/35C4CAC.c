// MGJNNCKDJCP$$BIMCJEPIKFI @ RVA 0x35C4CAC

/* WARNING: Removing unreachable block (ram,0x036c4f70) */

void MGJNNCKDJCP__BIMCJEPIKFI
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,KINHGEBKOEG_o *DKMMBMBMJBO,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  Il2CppObject *key;
  Il2CppObject *value;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568f58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&StringLiteral_11876);
    DAT_04568f58 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_11876,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_036c4dd8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c4dd8:
        uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar6 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_036c4f08;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_036c4ef0;
        }
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_036c4e38;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c4e38:
        plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (plVar4 == (long *)0x0) {
          if (DKMMBMBMJBO != (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
LAB_036c4f60:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar4);
        }
        if (DKMMBMBMJBO == (KINHGEBKOEG_o *)0x0) goto LAB_036c4f60;
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (DKMMBMBMJBO->fields).JPNMMLFPECM;
        key = (Il2CppObject *)
              (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        value = (Il2CppObject *)
                (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,key,value,
                   Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_036c4ef0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036c4f24;
    }
  }
LAB_036c4f08:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c4f24:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

