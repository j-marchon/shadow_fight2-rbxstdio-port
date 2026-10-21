// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.TemplateAnimation  (obfuscated FCFGGKLDBFJ)
// TypeDefIndex 2519
// Namespace: 
// public class TemplateAnimation
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   private List<InfoAnimation> PLMBJNAAGOI; // 0x18

// ===== public void .ctor(InfoAnimation CFNFIOONALH)  [RVA 0x338EA98]
// TemplateAnimation$$.ctor @ RVA 0x338EA98

void TemplateAnimation___ctor(TemplateAnimation_o *__this,InfoAnimation_o *CFNFIOONALH,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  
  if ((DAT_04567c05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_04567c05 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  ppSVar1 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CFNFIOONALH != (InfoAnimation_o *)0x0) {
    (__this->fields).NPFMOEOIEKM = (CFNFIOONALH->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    TemplateAnimation__ACHCKILJGJK(__this,CFNFIOONALH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACHCKILJGJK(InfoAnimation NLEBDPHNIDI)  [RVA 0x338EB48]
// TemplateAnimation$$ACHCKILJGJK @ RVA 0x338EB48

void TemplateAnimation__ACHCKILJGJK(TemplateAnimation_o *__this,InfoAnimation_o *NLEBDPHNIDI,MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04567c06 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<InfoAnimation>__);
    DAT_04567c06 = 1;
  }
  iVar1 = DJNBJHPDKDP__OFNFOGHFDML<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).PLMBJNAAGOI,
                     (Il2CppObject *)NLEBDPHNIDI,Method_DJNBJHPDKDP_OFNFOGHFDML<InfoAnimation>__);
  if (NLEBDPHNIDI != (InfoAnimation_o *)0x0) {
    InfoAnimation__JLJIIIPLIPK(NLEBDPHNIDI,(__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}


// ===== public List<InfoAnimation> KNLIDFOCHKP()  [RVA 0x338EBB8]
// TemplateAnimation$$KNLIDFOCHKP @ RVA 0x338EBB8

System_Collections_Generic_List_ECENNHNBAME__o *
TemplateAnimation__KNLIDFOCHKP(TemplateAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).PLMBJNAAGOI;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x338EBC0]
// TemplateAnimation$$.ctor @ RVA 0x338EBC0

void TemplateAnimation___ctor(TemplateAnimation_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  
  if ((DAT_04567c07 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567c07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
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
// TemplateAnimation$$KCHJCGEMCGE @ RVA 0x338ECA8

System_String_o * TemplateAnimation__KCHJCGEMCGE(TemplateAnimation_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}

