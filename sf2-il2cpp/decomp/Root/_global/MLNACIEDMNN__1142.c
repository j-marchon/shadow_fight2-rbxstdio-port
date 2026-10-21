// TypeDefIndex 1142
// Namespace: 
// public class MLNACIEDMNN
// Fields:
//   private readonly string FPIFOICEKCI; // 0x10
//   private int PGDIGMHNIME; // 0x18

// ===== private bool OMADDBJLANO(XmlNode AHDGNOJPPIB)  [RVA 0x30FA664]
// MLNACIEDMNN$$OMADDBJLANO @ RVA 0x30FA664

bool MLNACIEDMNN__OMADDBJLANO
               (MLNACIEDMNN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04566493 & 1) == 0) {
    __this = (MLNACIEDMNN_o *)FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04566493 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    __this = (MLNACIEDMNN_o *)0x0;
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public HOOAAGABMBL EOHMFJFFFIN(XmlNode AHDGNOJPPIB)  [RVA 0x30FA6E0]
// MLNACIEDMNN$$EOHMFJFFFIN @ RVA 0x30FA6E0

HOOAAGABMBL_o *
MLNACIEDMNN__EOHMFJFFFIN(MLNACIEDMNN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  HOOAAGABMBL_o *__this_00;
  
  if ((DAT_04566494 & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    DAT_04566494 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (bVar2 = MLNACIEDMNN__JBICIAFLDGH(__this,AHDGNOJPPIB,method), bVar2)) {
    MLNACIEDMNN__OMADDBJLANO((MLNACIEDMNN_o *)0x1,AHDGNOJPPIB,method);
    __this_00 = (HOOAAGABMBL_o *)thunk_FUN_01bda818(HOOAAGABMBL_TypeInfo);
    HOOAAGABMBL___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    if (__this_00 != (HOOAAGABMBL_o *)0x0) {
      HOOAAGABMBL__DFHJNHLJBND(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      iVar1 = (__this->fields).PGDIGMHNIME;
      (__this->fields).PGDIGMHNIME = iVar1 + 1;
      (__this_00->fields)._HBPAJOBFMLH_k__BackingField = iVar1;
      return __this_00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (HOOAAGABMBL_o *)0x0;
}


// ===== private bool JBICIAFLDGH(XmlNode AHDGNOJPPIB)  [RVA 0x30FA78C]
// MLNACIEDMNN$$JBICIAFLDGH @ RVA 0x30FA78C

bool MLNACIEDMNN__JBICIAFLDGH
               (MLNACIEDMNN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_01;
  System_Char_array *separator;
  System_String_array *source;
  
  if ((DAT_04566495 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Contains<string>__);
    FUN_01bab630(&StringLiteral_8314/*"Labels"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566495 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_8314/*"Labels"*/,(MethodInfo *)0x0);
      __this_01 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
      if (separator != (System_Char_array *)0x0) {
                    /* try { // try from 031fa844 to 032fa86b has its CatchHandler @ 031fab20 */
        if ((int)separator->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        separator->m_Items[0] = 0x7c;
        if ((__this_01 != (System_String_o *)0x0) &&
           (source = System_String__Split(__this_01,separator,1,(MethodInfo *)0x0),
           source != (System_String_array *)0x0)) {
          if (source->max_length != 0) {
            bVar1 = System_Linq_Enumerable__Contains<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (Il2CppObject *)(__this->fields).FPIFOICEKCI,
                               Method_System_Linq_Enumerable_Contains<string>__);
            return bVar1;
          }
                    /* try { // try from 031fa8a0 to 032fa8cb has its CatchHandler @ 031fab1c */
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30FA8AC]
// MLNACIEDMNN$$.ctor @ RVA 0x30FA8AC

void MLNACIEDMNN___ctor(MLNACIEDMNN_o *__this,MethodInfo *method)

{
  int32_t GMGGINDHNPI;
  System_String_o *pSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  pSVar1 = GNAFJMPJNKI__CFJCDFEAPFD(GMGGINDHNPI,(MethodInfo *)0x0);
  (__this->fields).FPIFOICEKCI = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  return;
}

