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
    FUN_01bab630(&StringLiteral_4276);
    FUN_01bab630(&StringLiteral_9327);
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
                                ((__this->fields)._OLIGHNIEIGK_k__BackingField,StringLiteral_4276,
                                 (MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__HBGAGFJBGKD(JHMENEKPIBO,StringLiteral_9327,(MethodInfo *)0x0);
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

