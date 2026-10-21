// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$LGJBNGHJBII @ RVA 0x3093828

/* WARNING: Removing unreachable block (ram,0x03193b04) */

int32_t Nekki_SF2_GUI_GeneralMenu_StoryItemText__LGJBNGHJBII
                  (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,
                  System_Xml_XmlNode_o *KOHKKIKJLHB,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *__this_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045660bb & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4543);
    FUN_01bab630(&StringLiteral_6379);
    __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)FUN_01bab630(&StringLiteral_7235);
    DAT_045660bb = 1;
  }
  if (KOHKKIKJLHB != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(KOHKKIKJLHB->klass->vtable)._51_get_Item.methodPtr)
                               (KOHKKIKJLHB,StringLiteral_6379,
                                (KOHKKIKJLHB->klass->vtable)._51_get_Item.method);
    __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)0x0;
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0319395c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319395c:
          uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar8 & 1) == 0) {
            iVar3 = 0;
            goto LAB_03193a64;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_031939bc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031939bc:
          JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO);
            }
          }
          pSVar6 = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_7235,(MethodInfo *)0x0);
          __this_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__Equals(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
        } while (!bVar2);
        pSVar6 = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_4543,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
LAB_03193a64:
        plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
        if (plVar4 != (long *)0x0) {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03193ac4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03193ac4:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        return iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

