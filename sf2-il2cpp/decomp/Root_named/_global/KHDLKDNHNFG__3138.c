// TypeDefIndex 3138
// Namespace: 
// public class KHDLKDNHNFG
// Fields:
//   private XmlNode <OLIGHNIEIGK>k__BackingField; // 0x10
//   public List<string> BGCEELKLNFP; // 0x18

// ===== private void EBHKHMHKPEP(XmlNode CJNHFNHJHPE)  [RVA 0x34D42E8]
// KHDLKDNHNFG$$EBHKHMHKPEP @ RVA 0x34D42E8

void KHDLKDNHNFG__EBHKHMHKPEP
               (KHDLKDNHNFG_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OLIGHNIEIGK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x34D42F0]
// KHDLKDNHNFG$$.ctor @ RVA 0x34D42F0

/* WARNING: Removing unreachable block (ram,0x035d46dc) */

void KHDLKDNHNFG___ctor(KHDLKDNHNFG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *item;
  long lVar9;
  System_String_array *pSVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_string__o **ppSVar13;
  
  if ((DAT_045686ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11425/*"RosterUnlockedCharacters.RosterUnlockedCharacters already has such char-name in List<string>"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_045686ca = 1;
  }
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar13 = &(__this->fields).BGCEELKLNFP;
  *ppSVar13 = pSVar4;
  thunk_FUN_01c20e04(ppSVar13,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._OLIGHNIEIGK_k__BackingField = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_035d44ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_035d44ac:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_035d466c;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_035d450c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035d450c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar9 = *plVar7;
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar7 = (long *)(*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = (System_String_o *)
           (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (*ppSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)*ppSVar13,(Il2CppObject *)item,
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_11425/*"RosterUnlockedCharacters.RosterUnlockedCharacters already has such char-name in List<string>"*/,(MethodInfo *)0x0);
    }
    lVar9 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar4 = *ppSVar13;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_035d4688;
    }
  }
LAB_035d466c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035d4688:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public void FCAGNGMLNGD(string KGLJICLJHEL)  [RVA 0x34D47D0]
// KHDLKDNHNFG$$FCAGNGMLNGD @ RVA 0x34D47D0

void KHDLKDNHNFG__FCAGNGMLNGD(KHDLKDNHNFG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_array *pSVar6;
  
  if ((DAT_045686cb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_4276/*"Character"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_045686cb = 1;
  }
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pSVar4 = (__this->fields).BGCEELKLNFP;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_List<string>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (bVar3) {
      return;
    }
    pSVar4 = (__this->fields).BGCEELKLNFP;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pSVar6 != (System_String_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = KGLJICLJHEL;
          thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,KGLJICLJHEL);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KGLJICLJHEL
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        JHMENEKPIBO = EIABCPKDEBD__KPODFFHOHGK
                                ((__this->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_4276/*"Character"*/,
                                 (MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__HBGAGFJBGKD(JHMENEKPIBO,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d4910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar5,KGLJICLJHEL,(pSVar5->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IJFJAGDKJGH(string KGLJICLJHEL)  [RVA 0x34D4918]
// KHDLKDNHNFG$$IJFJAGDKJGH @ RVA 0x34D4918

bool KHDLKDNHNFG__IJFJAGDKJGH(KHDLKDNHNFG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_045686cc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_045686cc = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (__this->fields).BGCEELKLNFP;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x34D4990]
// KHDLKDNHNFG$$NBLFIEEHECP @ RVA 0x34D4990

System_Xml_XmlNode_o * KHDLKDNHNFG__NBLFIEEHECP(KHDLKDNHNFG_o *__this,MethodInfo *method)

{
  return (__this->fields)._OLIGHNIEIGK_k__BackingField;
}


// ===== public List<string> JFIDBPBHDFN()  [RVA 0x34D4998]
// KHDLKDNHNFG$$JFIDBPBHDFN @ RVA 0x34D4998

System_Collections_Generic_List_string__o *
KHDLKDNHNFG__JFIDBPBHDFN(KHDLKDNHNFG_o *__this,MethodInfo *method)

{
  return (__this->fields).BGCEELKLNFP;
}


// ===== public void FCDFBLNKLNN()  [RVA 0x34D49A0]
// KHDLKDNHNFG$$FCDFBLNKLNN @ RVA 0x34D49A0

void KHDLKDNHNFG__FCDFBLNKLNN(KHDLKDNHNFG_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Xml_XmlNode_o *pSVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_045686cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_045686cd = 1;
  }
  pSVar2 = (__this->fields).BGCEELKLNFP;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d4a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
                (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

