// TypeDefIndex 2500
// Namespace: 
// [CompilerGenerated]
// private sealed class IDDIABHBDEE.FDOKJAFPJFA
// Fields:
//   public CFGLKHFFEKA configVersion; // 0x10
//   public CFGLKHFFEKA version; // 0x18

// ===== internal bool MNLALOKGGDH(XmlNode node)  [RVA 0x3389400]
// IDDIABHBDEE.FDOKJAFPJFA$$MNLALOKGGDH @ RVA 0x3389400

bool IDDIABHBDEE_FDOKJAFPJFA__MNLALOKGGDH
               (IDDIABHBDEE_FDOKJAFPJFA_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  CFGLKHFFEKA_o *IHEPHBIPLPM;
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  CFGLKHFFEKA_o *pCVar3;
  
  if ((DAT_04567bd2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_559);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_560);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    DAT_04567bd2 = 1;
  }
  if (node != (System_Xml_XmlNode_o *)0x0) {
    pCVar3 = (__this->fields).configVersion;
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(node->klass->vtable)._16_get_Attributes.methodPtr)
                          (node,(node->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_559,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_560,(MethodInfo *)0x0);
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar2,(MethodInfo *)0x0);
      pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (pCVar3 != (CFGLKHFFEKA_o *)0x0) {
        CFGLKHFFEKA__JAGMOPPIMKB(pCVar3,pSVar2,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).configVersion;
        IHEPHBIPLPM = (__this->fields).version;
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = CFGLKHFFEKA__KJECKLOHMAM(pCVar3,IHEPHBIPLPM,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3389554]
// IDDIABHBDEE.FDOKJAFPJFA$$.ctor @ RVA 0x3389554

void IDDIABHBDEE_FDOKJAFPJFA___ctor(IDDIABHBDEE_FDOKJAFPJFA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

