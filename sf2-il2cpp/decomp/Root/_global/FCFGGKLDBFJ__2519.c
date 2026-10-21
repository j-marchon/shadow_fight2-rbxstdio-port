// TypeDefIndex 2519
// Namespace: 
// public class FCFGGKLDBFJ
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   private List<ECENNHNBAME> PLMBJNAAGOI; // 0x18

// ===== public void .ctor(ECENNHNBAME CFNFIOONALH)  [RVA 0x338EA98]
// FCFGGKLDBFJ$$.ctor @ RVA 0x338EA98

void FCFGGKLDBFJ___ctor(FCFGGKLDBFJ_o *__this,ECENNHNBAME_o *CFNFIOONALH,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  
  if ((DAT_04567c05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04567c05 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar1 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CFNFIOONALH != (ECENNHNBAME_o *)0x0) {
    (__this->fields).NPFMOEOIEKM = (CFNFIOONALH->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    FCFGGKLDBFJ__ACHCKILJGJK(__this,CFNFIOONALH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACHCKILJGJK(ECENNHNBAME NLEBDPHNIDI)  [RVA 0x338EB48]
// FCFGGKLDBFJ$$ACHCKILJGJK @ RVA 0x338EB48

void FCFGGKLDBFJ__ACHCKILJGJK(FCFGGKLDBFJ_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04567c06 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<ECENNHNBAME>__);
    DAT_04567c06 = 1;
  }
  iVar1 = DJNBJHPDKDP__OFNFOGHFDML<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).PLMBJNAAGOI,
                     (Il2CppObject *)NLEBDPHNIDI,Method_DJNBJHPDKDP_OFNFOGHFDML<ECENNHNBAME>__);
  if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
    ECENNHNBAME__JLJIIIPLIPK(NLEBDPHNIDI,(__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}


// ===== public List<ECENNHNBAME> KNLIDFOCHKP()  [RVA 0x338EBB8]
// FCFGGKLDBFJ$$KNLIDFOCHKP @ RVA 0x338EBB8

System_Collections_Generic_List_ECENNHNBAME__o *
FCFGGKLDBFJ__KNLIDFOCHKP(FCFGGKLDBFJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PLMBJNAAGOI;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x338EBC0]
// FCFGGKLDBFJ$$.ctor @ RVA 0x338EBC0

void FCFGGKLDBFJ___ctor(FCFGGKLDBFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  
  if ((DAT_04567c07 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567c07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar1 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).NPFMOEOIEKM = pSVar2;
      thunk_FUN_01c20e04(&__this->fields,pSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x338ECA8]
// FCFGGKLDBFJ$$KCHJCGEMCGE @ RVA 0x338ECA8

System_String_o * FCFGGKLDBFJ__KCHJCGEMCGE(FCFGGKLDBFJ_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}

