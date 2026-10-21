// TypeDefIndex 3053
// Namespace: 
// public class IFEDMCHPFIM : BOFEMGGNODC
// Fields:
//   private static readonly char[] JAEIAFPCHFF; // 0x0
//   private static readonly IReadOnlyDictionary<IFEDMCHPFIM.FOPNKJCFBLG, Action<ICollection<string>>> IAIFLHDGLGG; // 0x8
//   private string GALKDPHFALN; // 0x68
//   private string HAPAKNHBJCO; // 0x70

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34BA418]
// IFEDMCHPFIM$$MAHFCKJGBPP @ RVA 0x34BA418

void IFEDMCHPFIM__MAHFCKJGBPP(IFEDMCHPFIM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____c
  *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
  *pSVar9;
  long local_38;
  
  if ((DAT_045685c2 & 1) == 0) {
    FUN_01bab630(&IFEDMCHPFIM_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                );
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<IFEDMCHPFIM_FOPNKJCFBLG>__);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_11476/*"RunAction: detected unsupported Show parameter '"*/);
    DAT_045685c2 = 1;
  }
  local_38 = 0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar8 = (__this->fields).GALKDPHFALN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar8,(MethodInfo *)0x0);
  uVar2 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                    (pSVar8,-1,Method_PCOEHCPGBBG_AICKIDLLIBK<IFEDMCHPFIM_FOPNKJCFBLG>__);
  pSVar8 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).HAPAKNHBJCO,(MethodInfo *)0x0);
  if ((IFEDMCHPFIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFEDMCHPFIM_TypeInfo);
  }
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar3 = System_String__Split
                       (pSVar8,IFEDMCHPFIM_TypeInfo->static_fields->JAEIAFPCHFF,1,(MethodInfo *)0x0)
    ;
    pSVar9 = IFEDMCHPFIM_TypeInfo->static_fields->IAIFLHDGLGG;
    if (pSVar9 != (System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
                   *)0x0) {
      pSVar5 = pSVar9->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
             ) {
            pVVar4 = pSVar5->vtable + (*piVar7 + 1);
            goto LAB_035ba5a0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(pSVar9,
                            System_Collections_Generic_IReadOnlyDictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                            ,1);
LAB_035ba5a0:
      uVar6 = (*pVVar4->methodPtr)(pSVar9,(ulong)uVar2,&local_38,pVVar4->method);
      if ((uVar6 & 1) == 0) {
        pSVar8 = System_String__Concat
                           (StringLiteral_11476/*"RunAction: detected unsupported Show parameter '"*/,(__this->fields).GALKDPHFALN,StringLiteral_853/*"'!"*/,
                            (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar8,(MethodInfo *)0x0);
      }
      else if (local_38 != 0) {
        (**(code **)(local_38 + 0x18))
                  (*(undefined8 *)(local_38 + 0x40),pSVar3,*(undefined8 *)(local_38 + 0x28));
      }
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34BA630]
// IFEDMCHPFIM$$HNIHOIAMDPC @ RVA 0x34BA630

void IFEDMCHPFIM__HNIHOIAMDPC
               (IFEDMCHPFIM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_045685c3 & 1) == 0) {
    FUN_01bab630(&IFEDMCHPFIM_FOPNKJCFBLG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_4968/*"CustomTags"*/);
    FUN_01bab630(&StringLiteral_12067/*"Show"*/);
    DAT_045685c3 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12067/*"Show"*/,(MethodInfo *)0x0);
      local_48.klass = (System_Enum_c *)IFEDMCHPFIM_FOPNKJCFBLG_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = 0;
      pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,pSVar3,(MethodInfo *)0x0);
      (__this->fields).GALKDPHFALN = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_4968/*"CustomTags"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).HAPAKNHBJCO;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34BA784]
// IFEDMCHPFIM$$.ctor @ RVA 0x34BA784

void IFEDMCHPFIM___ctor(IFEDMCHPFIM_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x34BA78C]
// IFEDMCHPFIM$$.cctor @ RVA 0x34BA78C

void IFEDMCHPFIM___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  Il2CppObject *pIVar2;
  System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
  **ppSVar3;
  
  if ((DAT_045685c4 & 1) == 0) {
    FUN_01bab630(&System_Action<ICollection<string>>_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                );
    FUN_01bab630(&IFEDMCHPFIM_TypeInfo);
    FUN_01bab630(&Method_IFEDMCHPFIM_<>c_COEDHDEEGHE__);
    FUN_01bab630(&Method_IFEDMCHPFIM_<>c_CPGGMOIBOEH__);
    FUN_01bab630(&IFEDMCHPFIM_<>c_TypeInfo);
    DAT_045685c4 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = 0x7c;
    IFEDMCHPFIM_TypeInfo->static_fields->JAEIAFPCHFF = pSVar1;
    thunk_FUN_01c20e04(IFEDMCHPFIM_TypeInfo->static_fields);
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
              (__this,
               Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>__ctor__
              );
    if ((IFEDMCHPFIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(System_Action<ICollection<string>>_TypeInfo);
    System_Action<object>___ctor();
    if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                (__this,0,pIVar2,
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(System_Action<ICollection<string>>_TypeInfo);
      System_Action<object>___ctor();
      System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                (__this,1,pIVar2,
                 Method_System_Collections_Generic_Dictionary<IFEDMCHPFIM_FOPNKJCFBLG,_Action<ICollection<string>>>_Add__
                );
      ppSVar3 = &IFEDMCHPFIM_TypeInfo->static_fields->IAIFLHDGLGG;
      *ppSVar3 = (System_Collections_Generic_IReadOnlyDictionary_IFEDMCHPFIM_FOPNKJCFBLG__Action_ICollection_string____o
                  *)__this;
      thunk_FUN_01c20e04(ppSVar3,__this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

