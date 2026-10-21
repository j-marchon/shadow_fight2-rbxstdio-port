// MGJNNCKDJCP$$EPGONHLDJFD @ RVA 0x35C4BCC

void MGJNNCKDJCP__EPGONHLDJFD
               (MGJNNCKDJCP_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,
               LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  MGJNNCKDJCP_o *__this_01;
  MGJNNCKDJCP_o *__this_02;
  System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_04568f56 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f56 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  MGJNNCKDJCP__MNDFPLAFICI
            (__this_01,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,
             (System_Xml_XmlNode_o *)__this_00,method);
  MGJNNCKDJCP__OMENLOHIJIC(__this,(System_Xml_XmlNode_o *)__this_00,HPACPFLKHPK,PFDEAPMMFAP,in_x4);
  if ((HPACPFLKHPK != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(HPACPFLKHPK,(MethodInfo *)0x0),
     PFDEAPMMFAP != (LEGDPJHPEOB_o *)0x0)) {
    method_00 = (MethodInfo *)HPACPFLKHPK;
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)PFDEAPMMFAP,(__this->fields).MHDJAEILAJL,HPACPFLKHPK,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_02 = (MGJNNCKDJCP_o *)
                (*(HPACPFLKHPK->klass->vtable)._3_ToString.methodPtr)
                          (HPACPFLKHPK,(HPACPFLKHPK->klass->vtable)._3_ToString.method);
    LDAIPGBJEOG = MGJNNCKDJCP__EDAHAFNGECF(__this_02,(System_Xml_XmlNode_o *)__this_00,method_00);
    AMIINPEKKFB__NKGDNFCCFCD((System_String_o *)__this_02,LDAIPGBJEOG,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

