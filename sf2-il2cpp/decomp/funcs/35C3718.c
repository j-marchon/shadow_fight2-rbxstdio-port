// MGJNNCKDJCP$$GPNMPFADPOJ @ RVA 0x35C3718

void MGJNNCKDJCP__GPNMPFADPOJ
               (MGJNNCKDJCP_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,
               LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this_00;
  MGJNNCKDJCP_o *__this_01;
  FOKJBDHLIMG_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_04568f52 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 036c3760 to 037c3807 has its CatchHandler @ 036c3760
                       catch() { ... } // from try @ 036c3760 with catch @ 036c3760
                       catch() { ... } // from try @ 036c382c with catch @ 036c3760
                       catch() { ... } // from try @ 036c3878 with catch @ 036c3760
                       catch() { ... } // from try @ 036c38a0 with catch @ 036c3760
                       catch() { ... } // from try @ 036c38e0 with catch @ 036c3760 */
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04568f52 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  MGJNNCKDJCP__MNDFPLAFICI
            (__this_01,(System_Xml_XmlNode_o *)(__this->fields).HJKLIDCAEOE,
             (System_Xml_XmlNode_o *)__this_00,method);
  MGJNNCKDJCP__OMENLOHIJIC(__this,(System_Xml_XmlNode_o *)__this_00,HPACPFLKHPK,PFDEAPMMFAP,in_x4);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if (__this_02 != (FOKJBDHLIMG_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    FOKJBDHLIMG__PJKJHCHFLHD
              (__this_02,(System_Xml_XmlNode_o *)__this_00,false,false,(MethodInfo *)0x0);
    MGJNNCKDJCP__OPANNCEJFML(__this,(System_Xml_XmlNode_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

