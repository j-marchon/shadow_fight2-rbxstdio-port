// TypeDefIndex 2794
// Namespace: 
// public class DPDDOKKMMOM
// Fields:
//   private XmlNode DMLGJFCNNJF; // 0x10

// ===== public void FOOHBJNHOKK(XmlNode AHDGNOJPPIB)  [RVA 0x3416E1C]
// DPDDOKKMMOM$$FOOHBJNHOKK @ RVA 0x3416E1C

void DPDDOKKMMOM__FOOHBJNHOKK
               (DPDDOKKMMOM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  (__this->fields).DMLGJFCNNJF = AHDGNOJPPIB;
  thunk_FUN_01c20e04();
  return;
}


// ===== public XmlNode ODDDAFKAMAM()  [RVA 0x3416E24]
// DPDDOKKMMOM$$ODDDAFKAMAM @ RVA 0x3416E24

System_Xml_XmlNode_o * DPDDOKKMMOM__ODDDAFKAMAM(DPDDOKKMMOM_o *__this,MethodInfo *method)

{
  return (__this->fields).DMLGJFCNNJF;
}


// ===== public static string BGPMMIJAGOG(XmlNode AHDGNOJPPIB, int DNFNOAFMOIE = 0)  [RVA 0x3416E2C]
// DPDDOKKMMOM$$BGPMMIJAGOG @ RVA 0x3416E2C

/* WARNING: Removing unreachable block (ram,0x03516ff0) */
/* WARNING: Removing unreachable block (ram,0x03517000) */

System_String_o *
DPDDOKKMMOM__BGPMMIJAGOG(System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t DNFNOAFMOIE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_StringWriter_o *__this;
  System_Xml_XmlTextWriter_o *__this_00;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  System_Xml_XmlTextWriter_c *pSVar5;
  System_IO_StringWriter_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045680a8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_StringWriter_TypeInfo);
    FUN_01bab630(&System_Xml_XmlTextWriter_TypeInfo);
    DAT_045680a8 = 1;
  }
  __this = (System_IO_StringWriter_o *)thunk_FUN_01bda818(System_IO_StringWriter_TypeInfo);
  System_IO_StringWriter___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (System_Xml_XmlTextWriter_o *)thunk_FUN_01bda818(System_Xml_XmlTextWriter_TypeInfo);
  System_Xml_XmlTextWriter___ctor(__this_00,(System_IO_TextWriter_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (System_Xml_XmlTextWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Xml_XmlTextWriter__set_Formatting(__this_00,1,(MethodInfo *)0x0);
  System_Xml_XmlTextWriter__set_Indentation(__this_00,DNFNOAFMOIE,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(AHDGNOJPPIB->klass->vtable)._47_unknown.methodPtr)
            (AHDGNOJPPIB,__this_00,(AHDGNOJPPIB->klass->vtable)._47_unknown.method);
  pSVar5 = __this_00->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar3 = &(pSVar5->vtable)._0_Equals + *piVar8;
        goto LAB_03516f50;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_03516f50:
  (*pVVar3->methodPtr)(__this_00,pVVar3->method);
  if (__this == (System_IO_StringWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._3_ToString.methodPtr)
                     (__this,(__this->klass->vtable)._3_ToString.method);
  pSVar6 = __this->klass;
  uVar2._0_1_ = (pSVar6->_2).rank;
  uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar2;
  if (uVar7 != 0) {
    piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar3 = &(pSVar6->vtable)._0_Equals + *piVar8;
        goto LAB_03516fc8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_03516fc8:
  (*pVVar3->methodPtr)(__this,pVVar3->method);
  return pSVar4;
}


// ===== public void .ctor()  [RVA 0x341717C]
// DPDDOKKMMOM$$.ctor @ RVA 0x341717C

void DPDDOKKMMOM___ctor(DPDDOKKMMOM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

