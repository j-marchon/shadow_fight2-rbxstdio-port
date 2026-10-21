// TypeDefIndex 359
// Namespace: 
// public class NFNBHPOJFNJ
// Fields:
//   private static NFNBHPOJFNJ CNMHHKAMGPI; // 0x0
//   private const int AAANDAFCCFH = 200;
//   private const int BFEKGPPEOMO = 2000000;
//   private const string DABKMHPCFEL = "full_events.json";
//   private const string FOPNCAFPJDD = "events.json";
//   private const string PNIBGBNAJIN = "pays.json";
//   private const string HACHMEGPDNK = "events_data.xml";
//   private int BHDIODFMGPD; // 0x10
//   private int ONEHIOEMIHA; // 0x14
//   private int EBLLKDIIEBI; // 0x18
//   private int CFPGCJGJGHC; // 0x1C
//   private int PALMKKDPJAB; // 0x20
//   private int ENJDMHGDMNJ; // 0x24
//   private long KDNEJOFPBOP; // 0x28
//   private long FFFDNEMPHIE; // 0x30
//   private int JCNIIJMMLKA; // 0x38
//   private long JCJODFKPKAE; // 0x40
//   private uint GJMMEPBMLBM; // 0x48
//   private int BPPLJOIMODJ; // 0x4C
//   private int NLMGIANEGDC; // 0x50
//   private string MOAOBNPKFHF; // 0x58
//   private string KDAABAPIIEP; // 0x60
//   private int ADFEICBKGCN; // 0x68
//   private long LLMGMJNGKGL; // 0x70
//   private long JHPGMIMONIG; // 0x78
//   private NFNBHPOJFNJ.LEKEBLAEEIF GBHILJJMGGK; // 0x80
//   private NFNBHPOJFNJ.LEKEBLAEEIF JIFKMAOOFDI; // 0x84
//   private StringBuilder DGPKPHAHOJP; // 0x88
//   private StringBuilder BEDMFFEAEDI; // 0x90
//   private long BNFLGDFGHBL; // 0x98
//   private const int HCHHEGKEGDP = 900000;
//   private long HPCOCBDKCPE; // 0xA0

// ===== public static void NOJIAJPLOKB(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP, MDNLIFLBFNO OPAEPDIIOEB, bool FEPLAGOGJNL = False)  [RVA 0x3359B2C]
// NFNBHPOJFNJ$$NOJIAJPLOKB @ RVA 0x3359B2C

void NFNBHPOJFNJ__NOJIAJPLOKB
               (int32_t BKFOLMBMFNP,MDNLIFLBFNO_o *OPAEPDIIOEB,bool FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *pMVar3;
  NFNBHPOJFNJ_o *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  MethodInfo *JLNPKGGFFDD;
  MethodInfo *extraout_x0;
  MethodInfo *method_00;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04567a54 & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    pMVar3 = (MethodInfo *)FUN_01bab630(&StringLiteral_47/*"\n"*/);
    DAT_04567a54 = 1;
  }
  pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
  if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
     (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
    iVar2 = System_Text_StringBuilder__get_Length(pSVar5,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if ((pNVar4 == (NFNBHPOJFNJ_o *)0x0) ||
         (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 == (System_Text_StringBuilder_o *)0x0))
      goto LAB_03459c74;
      System_Text_StringBuilder__Append(pSVar5,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
    }
    JLNPKGGFFDD = (MethodInfo *)ONEDJCACCGM__CGLJFDPHMNB(BKFOLMBMFNP,OPAEPDIIOEB,(MethodInfo *)0x0);
    pMVar3 = JLNPKGGFFDD;
    if (FEPLAGOGJNL) {
      Nekki_SF2_Core_ApplicationController__Log((System_String_o *)JLNPKGGFFDD,(MethodInfo *)0x0);
      pMVar3 = extraout_x0;
    }
    pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
    if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
       (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append(pSVar5,(System_String_o *)JLNPKGGFFDD,(MethodInfo *)0x0);
      bVar1 = ONEDJCACCGM__KDFMBBPEJDE(BKFOLMBMFNP,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
        if (pNVar4 == (NFNBHPOJFNJ_o *)0x0) goto LAB_03459c74;
        pSVar5 = (pNVar4->fields).DGPKPHAHOJP;
        pNVar4 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
        NFNBHPOJFNJ__GDCHAJOJGBH(pNVar4,pSVar5,(System_String_o *)pNVar4,method);
      }
      bVar1 = ONEDJCACCGM__DCIMFCCJPMO(BKFOLMBMFNP,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
        NFNBHPOJFNJ__KLNMLOOCAAO(pNVar4,method_00);
        return;
      }
    }
  }
LAB_03459c74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KLNMLOOCAAO(string DNOPBOLEJBC, ref long KDHGNFFLHGO, Action<bool, string, object, string> GFNABKGEGJA, int CPFIPHMGNHI = 2000000, bool KDFKHKKJKCK = True, string CPECAEHDDDB = "save_json_log")  [RVA 0x3359E34]
// NFNBHPOJFNJ$$KLNMLOOCAAO @ RVA 0x3359E34

void NFNBHPOJFNJ__KLNMLOOCAAO
               (NFNBHPOJFNJ_o *__this,System_String_o *DNOPBOLEJBC,int64_t *KDHGNFFLHGO,
               System_Action_bool__string__object__string__o *GFNABKGEGJA,int32_t CPFIPHMGNHI,
               bool KDFKHKKJKCK,System_String_o *CPECAEHDDDB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NFNBHPOJFNJ_OPBPGNMEMPB_o *__this_00;
  System_IO_FileInfo_o *__this_01;
  ulong uVar3;
  System_Text_StringBuilder_o *__this_02;
  System_IO_StreamReader_o *__this_03;
  long *plVar4;
  System_String_o *pSVar5;
  int64_t iVar6;
  Core_Network_ServerProvider_o *__this_04;
  System_Action_bool__string__object__o *GFNABKGEGJA_00;
  MethodInfo *method_00;
  System_Action_bool__string__object__string__o *pSVar7;
  System_String_o **ppSVar8;
  NFNBHPOJFNJ_OPBPGNMEMPB_Fields *pNVar9;
  
  if ((DAT_04567a55 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object>_TypeInfo);
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_OPBPGNMEMPB_APBOPKDOCJP__);
    FUN_01bab630(&NFNBHPOJFNJ_OPBPGNMEMPB_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    DAT_04567a55 = 1;
  }
  __this_00 = (NFNBHPOJFNJ_OPBPGNMEMPB_o *)thunk_FUN_01bda818(NFNBHPOJFNJ_OPBPGNMEMPB_TypeInfo);
  NFNBHPOJFNJ_OPBPGNMEMPB___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (NFNBHPOJFNJ_OPBPGNMEMPB_o *)0x0) {
    pNVar9 = &__this_00->fields;
    pNVar9->p_delegate = GFNABKGEGJA;
    thunk_FUN_01c20e04(pNVar9,GFNABKGEGJA);
    __this_01 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
    System_IO_FileInfo___ctor(__this_01,DNOPBOLEJBC,(MethodInfo *)0x0);
    if (__this_01 != (System_IO_FileInfo_o *)0x0) {
      uVar3 = (*(__this_01->klass->vtable)._10_get_Exists.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._10_get_Exists.method);
      if ((uVar3 & 1) == 0) {
        return;
      }
      __this_02 = (System_Text_StringBuilder_o *)
                  thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(__this_02,(MethodInfo *)0x0);
      __this_03 = System_IO_FileInfo__OpenText(__this_01,(MethodInfo *)0x0);
      if (__this_03 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      plVar4 = (long *)(*(__this_03->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (**(code **)(*plVar4 + 0x328))(plVar4,*KDHGNFFLHGO,0,*(undefined8 *)(*plVar4 + 0x330));
      if (__this_02 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      while ((iVar2 = System_Text_StringBuilder__get_Length(__this_02,(MethodInfo *)0x0),
             iVar2 < CPFIPHMGNHI &&
             (bVar1 = System_IO_StreamReader__get_EndOfStream(__this_03,(MethodInfo *)0x0), !bVar1))
            ) {
        pSVar5 = (System_String_o *)
                 (*(__this_03->klass->vtable)._13_ReadLine.methodPtr)
                           (__this_03,(__this_03->klass->vtable)._13_ReadLine.method);
        System_Text_StringBuilder__Append(__this_02,pSVar5,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_02,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
      }
      plVar4 = (long *)(*(__this_03->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
      *KDHGNFFLHGO = iVar6;
      (*(__this_03->klass->vtable)._7_Close.methodPtr)
                (__this_03,(__this_03->klass->vtable)._7_Close.method);
      if (KDFKHKKJKCK) {
        NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_00);
      }
      if (__this_02 != (System_Text_StringBuilder_o *)0x0) {
        iVar2 = System_Text_StringBuilder__get_Length(__this_02,(MethodInfo *)0x0);
        if (iVar2 == 0) {
          pSVar7 = pNVar9->p_delegate;
          if (pSVar7 != (System_Action_bool__string__object__string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0345a140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar7->fields).super.super.invoke_impl)
                      ((pSVar7->fields).super.super.method_code,0,0,0,0,
                       (pSVar7->fields).super.super.method);
            return;
          }
        }
        else {
          pSVar5 = (System_String_o *)
                   (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                             (__this_02,(__this_02->klass->vtable)._3_ToString.method);
          ppSVar8 = &(__this_00->fields).logResultStr;
          *ppSVar8 = pSVar5;
          thunk_FUN_01c20e04(ppSVar8,pSVar5);
          __this_04 = Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
          pSVar5 = *ppSVar8;
          GFNABKGEGJA_00 =
               (System_Action_bool__string__object__o *)
               thunk_FUN_01bda818(System_Action<bool,_string,_object>_TypeInfo);
          System_Action<bool,_object,_object>___ctor();
          if (__this_04 != (Core_Network_ServerProvider_o *)0x0) {
            Core_Network_ServerProvider__SaveJsonLogAction
                      (__this_04,pSVar5,GFNABKGEGJA_00,CPECAEHDDDB,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCJEFECMBFC()  [RVA 0x335BB24]
// NFNBHPOJFNJ$$NCJEFECMBFC @ RVA 0x335BB24

void NFNBHPOJFNJ__NCJEFECMBFC(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *method_00;
  System_String_o *DNOPBOLEJBC;
  System_Action_bool__string__object__string__o *GFNABKGEGJA;
  MethodInfo *in_x7;
  
  method_00 = __this;
  if ((DAT_04567a56 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object,_string>_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_CLLEOJDJOMK__);
    method_00 = (NFNBHPOJFNJ_o *)FUN_01bab630(&StringLiteral_20666/*"save_pay_log"*/);
    DAT_04567a56 = 1;
  }
  if (((__this->fields).JIFKMAOOFDI | 2U) == 2) {
    return;
  }
  DNOPBOLEJBC = NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)method_00);
  GFNABKGEGJA = (System_Action_bool__string__object__string__o *)
                thunk_FUN_01bda818(System_Action<bool,_string,_object,_string>_TypeInfo);
  System_Action<bool,_object,_object,_object>___ctor();
  NFNBHPOJFNJ__KLNMLOOCAAO
            (__this,DNOPBOLEJBC,&(__this->fields).JHPGMIMONIG,GFNABKGEGJA,2000000,false,
             StringLiteral_20666/*"save_pay_log"*/,in_x7);
  return;
}


// ===== public void ALHPEKDJCOJ(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string PINADELACMD)  [RVA 0x335BC6C]
// NFNBHPOJFNJ$$ALHPEKDJCOJ @ RVA 0x335BC6C

void NFNBHPOJFNJ__ALHPEKDJCOJ
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *PINADELACMD,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *a_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567a57 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 0345bca4 to 0355bcab has its CatchHandler @ 0345bdd4 */
    FUN_01bab630(&StringLiteral_19983/*"ok"*/);
    FUN_01bab630(&StringLiteral_17601/*"data"*/);
    DAT_04567a57 = 1;
  }
  if (LKFALEIFDIO) {
                    /* try { // try from 0345bcc8 to 0355bccb has its CatchHandler @ 0345bdc0 */
                    /* try { // try from 0345bccc to 0355bcdb has its CatchHandler @ 0345bdd0 */
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
                    /* try { // try from 0345bcf0 to 0355bcf7 has its CatchHandler @ 0345bdc8 */
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345bdb8:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdb4 with catch @ 0345bdb8
                       try { // try from 0345bdb8 to 0355bdeb has its CatchHandler @ 0345b930 */
        FUN_01bab8c8();
      }
                    /* try { // try from 0345bd08 to 0355bd0f has its CatchHandler @ 0345bdbc */
                    /* try { // try from 0345bd10 to 0355bdab has its CatchHandler @ 0345b930 */
      a_00 = (SimpleJSON_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar1 = SimpleJSON_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
        if (plVar2 == (long *)0x0) goto LAB_0345bdb8;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        method_01 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983/*"ok"*/,(MethodInfo *)0x0);
        if (bVar1) {
          NFNBHPOJFNJ__CFPENDINBDI((NFNBHPOJFNJ_o *)0x1,PINADELACMD,method_01);
          NFNBHPOJFNJ__EAOLEKCDMCM(__this,method_00);
          return;
        }
      }
    }
  }
                    /* try { // try from 0345bdac to 0355bdaf has its CatchHandler @ 0345bdcc */
                    /* try { // try from 0345bdb0 to 0355bdb3 has its CatchHandler @ 0345bdc4 */
                    /* try { // try from 0345bdb4 to 0355bdb7 has its CatchHandler @ 0345bdb8 */
  return;
}


// ===== private void BNDFCFMCCEJ()  [RVA 0x335C20C]
// NFNBHPOJFNJ$$BNDFCFMCCEJ @ RVA 0x335C20C

void NFNBHPOJFNJ__BNDFCFMCCEJ(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint32_t uVar3;
  NFNBHPOJFNJ_o *method_00;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  long *plVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  int64_t iVar11;
  MethodInfo *pMVar12;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o **ppSVar13;
  
  method_00 = __this;
  if ((DAT_04567a58 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3163);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3164);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3165);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3166);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3167);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3168);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3169);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3170);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3171);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3172);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3173);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3174);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3175);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3176);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3177);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3178);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3179);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3180);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3182);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3183);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3184);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3185);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3186);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3187);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3189);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3190);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3191);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3192);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3193);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3194);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3195);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3196);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3197);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3198);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3199);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3200);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3201);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3202);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3203);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3204);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3205);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3206);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3207);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3208);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3209);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3210);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3211);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3212);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3213);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3214);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3215);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3216);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3217);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3218);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3219);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3220);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3221);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3222);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3223);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3224);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3225);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3226);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3227);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3228);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3229);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3230);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3231);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3232);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3233);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3234);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3235);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3236);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3237);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3238);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3239);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3240);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3241);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3242);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3243);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3244);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    method_00 = (NFNBHPOJFNJ_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567a58 = 1;
  }
  pSVar4 = NFNBHPOJFNJ__IOPLIMJLKKE((MethodInfo *)method_00);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar4,(MethodInfo *)0x0);
  pMVar12 = extraout_x1;
  if (bVar1) {
    pSVar4 = NFNBHPOJFNJ__IOPLIMJLKKE((MethodInfo *)0x1);
    pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,2,true,true,false,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (pSVar5 == (System_Xml_XmlDocument_o *)0x0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3163,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3164,
                 (MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar4 = NFNBHPOJFNJ__IOPLIMJLKKE(pMVar12);
      pSVar4 = System_String__Concat((System_String_o *)pMVar12,pSVar4,(MethodInfo *)0x0);
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3165,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3166,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      plVar8 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar5,pSVar4,(pSVar5->klass->vtable)._51_get_Item.method);
      if (plVar8 != (long *)0x0) {
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3171,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3172,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3173,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3174,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).BHDIODFMGPD = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3175,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3176,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3177,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3178,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).ONEHIOEMIHA = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3179,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3180,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3181,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3182,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).EBLLKDIIEBI = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3183,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3184,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3185,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3186,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).CFPGCJGJGHC = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3187,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3188,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3189,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3190,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).PALMKKDPJAB = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3191,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3192,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3193,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3194,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).ENJDMHGDMNJ = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3195,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3196,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3197,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3198,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar11 = GIAMPEGMNHE__KCCCDOBCCNN(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).KDNEJOFPBOP = iVar11;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3199,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3200,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3201,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3202,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).FFFDNEMPHIE = (long)iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3203,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3204,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3205,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3206,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).JCNIIJMMLKA = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3207,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3208,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3209,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3210,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar11 = GIAMPEGMNHE__KCCCDOBCCNN(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).JCJODFKPKAE = iVar11;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3211,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3212,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3213,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3214,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        uVar3 = GIAMPEGMNHE__JIONICBNBJE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).GJMMEPBMLBM = uVar3;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3215,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3216,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3217,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3218,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).BPPLJOIMODJ = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3219,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3220,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3221,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3222,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).NLMGIANEGDC = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3223,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3224,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3225,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3226,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3227,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3228,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar4 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,pSVar4,(MethodInfo *)0x0);
        (__this->fields).MOAOBNPKFHF = pSVar4;
        thunk_FUN_01c20e04();
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3229,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3230,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3231,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3232,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        pSVar4 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar10,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar13 = &(__this->fields).KDAABAPIIEP;
        *ppSVar13 = pSVar4;
        thunk_FUN_01c20e04(ppSVar13,pSVar4);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3233,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3234,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3235,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3236,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).ADFEICBKGCN = iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3237,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3238,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3239,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3240,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).LLMGMJNGKGL = (long)iVar2;
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3241,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3242,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar9 = (System_Xml_XmlNode_o *)
                 (**(code **)(*plVar8 + 0x468))(plVar8,pSVar4,*(undefined8 *)(*plVar8 + 0x470));
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3243,
                   (MethodInfo *)0x0);
                    /* try { // try from 0345d810 to 0355d9e3 has its CatchHandler @ 0345d810
                       catch() { ... } // from try @ 0345d810 with catch @ 0345d810
                       catch() { ... } // from try @ 0345db2c with catch @ 0345d810
                       catch() { ... } // from try @ 0345db9c with catch @ 0345d810
                       catch() { ... } // from try @ 0345dbf4 with catch @ 0345d810
                       catch() { ... } // from try @ 0345dc34 with catch @ 0345d810 */
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3244,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__NHPDFFAIJMF(pSVar9,pSVar4,(MethodInfo *)0x0);
        iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar10,0,(MethodInfo *)0x0);
        (__this->fields).JHPGMIMONIG = (long)iVar2;
        return;
      }
      pSVar4 = NFNBHPOJFNJ__IOPLIMJLKKE((MethodInfo *)0x0);
      pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
      }
      OCLJMFBDKOA__JAFHOLNKKBD(pSVar4,(MethodInfo *)0x0);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3167,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3168,
                 (MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      pSVar4 = NFNBHPOJFNJ__IOPLIMJLKKE(pMVar12);
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3169,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3170,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0345d9e4 to 0355d9eb has its CatchHandler @ 0345dbc0 */
      pSVar4 = System_String__Concat((System_String_o *)pMVar12,pSVar4,str2,(MethodInfo *)0x0);
    }
                    /* try { // try from 0345d9f8 to 0355d9ff has its CatchHandler @ 0345dba8 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0345da08 to 0355da0f has its CatchHandler @ 0345dba4 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 0345da14 to 0355da1b has its CatchHandler @ 0345dbb8 */
    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    pMVar12 = extraout_x1_00;
  }
                    /* try { // try from 0345da24 to 0355da2b has its CatchHandler @ 0345dbb4 */
                    /* try { // try from 0345da2c to 0355da3b has its CatchHandler @ 0345dbbc */
  NFNBHPOJFNJ__CKHDCCFGNEN(__this,pMVar12);
  return;
}


// ===== private static string JOECBAFGPOA()  [RVA 0x335BBFC]
// NFNBHPOJFNJ$$JOECBAFGPOA @ RVA 0x335BBFC

System_String_o * NFNBHPOJFNJ__JOECBAFGPOA(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567a59 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1539/*"/pays.json"*/);
    DAT_04567a59 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1539/*"/pays.json"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private IEnumerator LMIKJOOBAPI(Action CPECAEHDDDB)  [RVA 0x335DB38]
// NFNBHPOJFNJ$$LMIKJOOBAPI @ RVA 0x335DB38

System_Collections_IEnumerator_o *
NFNBHPOJFNJ__LMIKJOOBAPI(NFNBHPOJFNJ_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  NFNBHPOJFNJ_LNEDLDJNGPA_o *__this_00;
  System_Action_o **ppSVar1;
  
  if ((DAT_04567a5a & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_LNEDLDJNGPA_TypeInfo);
                    /* try { // try from 0345db64 to 0355db67 has its CatchHandler @ 0345dbd0 */
                    /* try { // try from 0345db68 to 0355db6b has its CatchHandler @ 0345dbd4 */
    DAT_04567a5a = 1;
  }
                    /* try { // try from 0345db6c to 0355db6f has its CatchHandler @ 0345dbb0 */
                    /* try { // try from 0345db70 to 0355db73 has its CatchHandler @ 0345dbd4 */
  __this_00 = (NFNBHPOJFNJ_LNEDLDJNGPA_o *)thunk_FUN_01bda818(NFNBHPOJFNJ_LNEDLDJNGPA_TypeInfo);
                    /* try { // try from 0345db74 to 0355db83 has its CatchHandler @ 0345dbcc */
  NFNBHPOJFNJ_LNEDLDJNGPA___ctor(__this_00,0,(MethodInfo *)0x0);
                    /* try { // try from 0345db84 to 0355db8f has its CatchHandler @ 0345dbd4 */
  if (__this_00 != (NFNBHPOJFNJ_LNEDLDJNGPA_o *)0x0) {
    ppSVar1 = &(__this_00->fields).action;
    *ppSVar1 = CPECAEHDDDB;
                    /* try { // try from 0345db90 to 0355db9b has its CatchHandler @ 0345dbd0 */
    thunk_FUN_01c20e04(ppSVar1,CPECAEHDDDB);
                    /* try { // try from 0345db9c to 0355dbef has its CatchHandler @ 0345d810 */
                    /* catch() { ... } // from try @ 0345db20 with catch @ 0345dba0 */
                    /* catch() { ... } // from try @ 0345da08 with catch @ 0345dba4 */
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0345d9f8 with catch @ 0345dba8 */
  FUN_01bab8c8();
}


// ===== public void BHLHBBKAFHH()  [RVA 0x335DBAC]
// NFNBHPOJFNJ$$BHLHBBKAFHH @ RVA 0x335DBAC

void NFNBHPOJFNJ__BHLHBBKAFHH(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0345da44 with catch @ 0345dbac */
                    /* catch() { ... } // from try @ 0345db6c with catch @ 0345dbb0 */
                    /* catch() { ... } // from try @ 0345da24 with catch @ 0345dbb4 */
  (__this->fields).ENJDMHGDMNJ = (__this->fields).ENJDMHGDMNJ + 1;
                    /* catch() { ... } // from try @ 0345da14 with catch @ 0345dbb8 */
  return;
}


// ===== public static void KCBJCLNBGAO(ONEDJCACCGM.IAKCGKLPEND BKFOLMBMFNP)  [RVA 0x335DBBC]
// NFNBHPOJFNJ$$KCBJCLNBGAO @ RVA 0x335DBBC

void NFNBHPOJFNJ__KCBJCLNBGAO(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_String_o *OMEOMLODMAC;
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 0345da2c with catch @ 0345dbbc */
                    /* catch() { ... } // from try @ 0345d9e4 with catch @ 0345dbc0 */
                    /* catch() { ... } // from try @ 0345da9c with catch @ 0345dbc4 */
  OMEOMLODMAC = ONEDJCACCGM__NHNJFGHIKJP(BKFOLMBMFNP,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345da68 with catch @ 0345dbc8 */
                    /* catch() { ... } // from try @ 0345db74 with catch @ 0345dbcc */
  NFNBHPOJFNJ__KKCJOLHJPHE(OMEOMLODMAC,method_00);
  return;
}


// ===== public static void BEPNDLOGAFK(int CJNHFNHJHPE)  [RVA 0x335DFEC]
// NFNBHPOJFNJ$$BEPNDLOGAFK @ RVA 0x335DFEC

void NFNBHPOJFNJ__BEPNDLOGAFK(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567a5b & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a5b = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).PALMKKDPJAB = CJNHFNHJHPE;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int CKPJNJBKMOA()  [RVA 0x335E04C]
// NFNBHPOJFNJ$$CKPJNJBKMOA @ RVA 0x335E04C

int32_t NFNBHPOJFNJ__CKPJNJBKMOA(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).ADFEICBKGCN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int PFGBFKJNPAI()  [RVA 0x335E068]
// NFNBHPOJFNJ$$PFGBFKJNPAI @ RVA 0x335E068

int32_t NFNBHPOJFNJ__PFGBFKJNPAI(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).BPPLJOIMODJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long GMOBLMGLPBM()  [RVA 0x335E084]
// NFNBHPOJFNJ$$GMOBLMGLPBM @ RVA 0x335E084

int64_t NFNBHPOJFNJ__GMOBLMGLPBM(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).JCJODFKPKAE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OKNENPNMIKP(ONEDJCACCGM.LPJPCOOMIIP BKFOLMBMFNP, MDNLIFLBFNO OPAEPDIIOEB)  [RVA 0x335E0A0]
// NFNBHPOJFNJ$$OKNENPNMIKP @ RVA 0x335E0A0

void NFNBHPOJFNJ__OKNENPNMIKP(int32_t BKFOLMBMFNP,MDNLIFLBFNO_o *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  NFNBHPOJFNJ_o *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *value;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04567a5c & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    pMVar3 = (MethodInfo *)FUN_01bab630(&StringLiteral_47/*"\n"*/);
    DAT_04567a5c = 1;
  }
  pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
  if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
     (pSVar5 = (pNVar4->fields).BEDMFFEAEDI, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
    uVar2 = System_Text_StringBuilder__get_Length(pSVar5,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)(ulong)uVar2;
    if (uVar2 != 0) {
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if ((pNVar4 == (NFNBHPOJFNJ_o *)0x0) ||
         (pSVar5 = (pNVar4->fields).BEDMFFEAEDI, pSVar5 == (System_Text_StringBuilder_o *)0x0))
      goto LAB_0345e1d4;
      pMVar3 = (MethodInfo *)
               System_Text_StringBuilder__Append(pSVar5,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
    }
    pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
    if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
      pSVar5 = (pNVar4->fields).BEDMFFEAEDI;
      value = ONEDJCACCGM__CGLJFDPHMNB(BKFOLMBMFNP,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar5,value,(MethodInfo *)0x0);
        bVar1 = ONEDJCACCGM__KDFMBBPEJDE(BKFOLMBMFNP,(MethodInfo *)0x0);
        if (bVar1) {
          pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
          if (pNVar4 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345e1d4;
          pSVar5 = (pNVar4->fields).BEDMFFEAEDI;
          pNVar4 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)0x1);
          NFNBHPOJFNJ__GDCHAJOJGBH(pNVar4,pSVar5,(System_String_o *)pNVar4,in_x3);
        }
        bVar1 = ONEDJCACCGM__DCIMFCCJPMO(BKFOLMBMFNP,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
        if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
          NFNBHPOJFNJ__NCJEFECMBFC(pNVar4,method_00);
          return;
        }
      }
    }
  }
LAB_0345e1d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IHHNIMJDIHE()  [RVA 0x335E1F4]
// NFNBHPOJFNJ$$IHHNIMJDIHE @ RVA 0x335E1F4

void NFNBHPOJFNJ__IHHNIMJDIHE(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_00;
  System_String_o *DNOPBOLEJBC;
  System_Action_bool__string__object__string__o *GFNABKGEGJA;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  MethodInfo *in_x7;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  
  pNVar1 = __this;
  if ((DAT_04567a5d & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object,_string>_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_CGMCAEFAILP__);
    pNVar1 = (NFNBHPOJFNJ_o *)FUN_01bab630(&StringLiteral_20664/*"save_full_json_log"*/);
    DAT_04567a5d = 1;
  }
  KOANCCDDBDA = (__this->fields).DGPKPHAHOJP;
  pNVar1 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)pNVar1);
  NFNBHPOJFNJ__GDCHAJOJGBH(pNVar1,KOANCCDDBDA,(System_String_o *)pNVar1,in_x3);
  NFNBHPOJFNJ__CFPENDINBDI(__this_00,method_01);
  DNOPBOLEJBC = NFNBHPOJFNJ__KEDOIFMBKNI(method_00);
  GFNABKGEGJA = (System_Action_bool__string__object__string__o *)
                thunk_FUN_01bda818(System_Action<bool,_string,_object,_string>_TypeInfo);
  System_Action<bool,_object,_object,_object>___ctor();
  NFNBHPOJFNJ__KLNMLOOCAAO
            (__this,DNOPBOLEJBC,&(__this->fields).HPCOCBDKCPE,GFNABKGEGJA,2000000,false,
             StringLiteral_20664/*"save_full_json_log"*/,in_x7);
  return;
}


// ===== private void CFPENDINBDI(string AADGFDGOKIA)  [RVA 0x335BDBC]
// NFNBHPOJFNJ$$CFPENDINBDI @ RVA 0x335BDBC

/* WARNING: Removing unreachable block (ram,0x0345bf04) */

void NFNBHPOJFNJ__CFPENDINBDI(NFNBHPOJFNJ_o *__this,System_String_o *AADGFDGOKIA,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *fileName;
  System_IO_FileInfo_o *__this_00;
  ulong uVar2;
  System_IO_FileStream_o *pSVar3;
  System_IO_StreamWriter_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_IO_StreamWriter_c *pSVar6;
  int32_t *piVar7;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bd08 with catch @ 0345bdbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bcc8 with catch @ 0345bdc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdb0 with catch @ 0345bdc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bcf0 with catch @ 0345bdc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdac with catch @ 0345bdcc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bccc with catch @ 0345bdd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bca4 with catch @ 0345bdd4
                        */
  if ((DAT_04567a5e & 1) == 0) {
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
                    /* try { // try from 0345bdec to 0355bdef has its CatchHandler @ 0345be18 */
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0345bdf0 to 0355be27 has its CatchHandler @ 0345b930 */
    DAT_04567a5e = 1;
  }
  fileName = NFNBHPOJFNJ__KEDOIFMBKNI((MethodInfo *)__this);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
                    /* catch() { ... } // from try @ 0345bdec with catch @ 0345be18 */
  System_IO_FileInfo___ctor(__this_00,fileName,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0345be28 to 0355be2f has its CatchHandler @ 0345be44 */
                    /* try { // try from 0345be30 to 0355be3b has its CatchHandler @ 0345b930 */
  uVar2 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0345be3c to 0355be43 has its CatchHandler @ 0345be44 */
    pSVar3 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0345be28 with catch @ 0345be44
                       catch(type#2 @ 00000000) { ... } // from try @ 0345be3c with catch @ 0345be44
                        */
    if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pSVar3->klass->vtable)._19_Close.methodPtr)(pSVar3,(pSVar3->klass->vtable)._19_Close.method);
  }
  pSVar4 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
  if (pSVar4 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar4->klass->vtable)._16_Write.methodPtr)
            (pSVar4,AADGFDGOKIA,(pSVar4->klass->vtable)._16_Write.method);
  pSVar6 = pSVar4->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar2 = (ulong)uVar1;
  if (uVar2 != 0) {
    piVar7 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar7;
        goto LAB_0345bedc;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0345bedc:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return;
}


// ===== private void NJEBOEEMFFO()  [RVA 0x335E1D8]
// NFNBHPOJFNJ$$NJEBOEEMFFO @ RVA 0x335E1D8

void NFNBHPOJFNJ__NJEBOEEMFFO(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *in_x3;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  
  KOANCCDDBDA = (__this->fields).BEDMFFEAEDI;
  __this_00 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)__this);
  NFNBHPOJFNJ__GDCHAJOJGBH(__this_00,KOANCCDDBDA,(System_String_o *)__this_00,in_x3);
  return;
}


// ===== public static int FPFICNFLJBJ()  [RVA 0x335E880]
// NFNBHPOJFNJ$$FPFICNFLJBJ @ RVA 0x335E880

int32_t NFNBHPOJFNJ__FPFICNFLJBJ(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).CFPGCJGJGHC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIBAKBEOOJI()  [RVA 0x335A240]
// NFNBHPOJFNJ$$KIBAKBEOOJI @ RVA 0x335A240

void NFNBHPOJFNJ__KIBAKBEOOJI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Xml_XmlDocument_o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  System_Xml_XmlElement_o *pSVar8;
  System_Xml_XmlElement_o *pSVar9;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a5f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3245);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3246);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3247);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3248);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3249);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3250);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3251);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3252);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3253);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3254);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3255);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3256);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3257);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3258);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3259);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3260);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3261);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3262);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3263);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3264);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3265);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3266);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3267);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3268);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3269);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3270);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3271);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3272);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3273);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3274);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3275);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3276);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3277);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3278);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3279);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3280);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3281);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3282);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3283);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3284);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3285);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3286);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3287);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3288);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3289);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3290);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3291);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3292);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3293);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3294);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3295);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3296);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3297);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3298);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3299);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3300);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3301);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3302);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3303);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3304);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3305);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3306);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3307);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3308);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3309);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3310);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3311);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3312);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3313);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3314);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3315);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3316);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3317);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3318);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3319);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3320);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3321);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3322);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04567a5f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo,method)
  ;
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3245,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3246,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3247,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3248,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (__this_00 != (System_Xml_XmlDocument_o *)0x0) {
    uVar7 = (*(__this_00->klass->vtable)._73_CreateXmlDeclaration.methodPtr)
                      (__this_00,pSVar5,pSVar6,0,
                       (__this_00->klass->vtable)._73_CreateXmlDeclaration.method);
    (*(__this_00->klass->vtable)._27_AppendChild.methodPtr)
              (__this_00,uVar7,(__this_00->klass->vtable)._27_AppendChild.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3249,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3250,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar8 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._27_AppendChild.methodPtr)
              (__this_00,pSVar8,(__this_00->klass->vtable)._27_AppendChild.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3251,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3252,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0345a830 to 0355a837 has its CatchHandler @ 0345b1e0 */
    pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
    if (pSVar8 != (System_Xml_XmlElement_o *)0x0) {
                    /* try { // try from 0345a850 to 0355a857 has its CatchHandler @ 0345b1dc */
      (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                    /* try { // try from 0345a870 to 0355a87b has its CatchHandler @ 0345b1b4 */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3253,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3254,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      iVar1 = (int)__this;
                    /* try { // try from 0345a8c0 to 0355a8db has its CatchHandler @ 0345b1b0 */
      pSVar6 = System_Int32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
      if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                    /* try { // try from 0345a8e8 to 0355a8f7 has its CatchHandler @ 0345b1b8 */
        (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                  (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3255,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3256,
                   (MethodInfo *)0x0);
                    /* try { // try from 0345a940 to 0355a95b has its CatchHandler @ 0345b19c */
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0345a964 to 0355a96b has its CatchHandler @ 0345b1a4 */
        (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                  (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                    /* try { // try from 0345a97c to 0355a983 has its CatchHandler @ 0345b1ac */
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0345a988 to 0355a98f has its CatchHandler @ 0345b190 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3257,
                   (MethodInfo *)0x0);
                    /* try { // try from 0345a9a0 to 0355a9a7 has its CatchHandler @ 0345b1a8 */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0345a9a8 to 0355a9b7 has its CatchHandler @ 0345b194 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3258,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0345a9c8 to 0355a9cf has its CatchHandler @ 0345b1a0 */
        pSVar6 = System_Int32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
        if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                    /* try { // try from 0345a9e8 to 0355aa33 has its CatchHandler @ 0345b1c8 */
          (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                    (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3259,
                     (MethodInfo *)0x0);
                    /* try { // try from 0345aa34 to 0355aa5b has its CatchHandler @ 0345b1c0 */
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3260,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0345aa5c to 0355b163 has its CatchHandler @ 034592c8 */
          pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
          (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                    (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3261,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3262,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pSVar6 = System_Int32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
          if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
            (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3263,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3264,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
            (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                      (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3265,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3266,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            pSVar6 = System_Int32__ToString(iVar1 + 0x1c,(MethodInfo *)0x0);
            if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
              (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3267,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3268,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
              (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                        (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3269,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3270,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pSVar6 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
              if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                          (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3271,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3272,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0);
                (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                          (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3273,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3274,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                pSVar6 = System_Int32__ToString(iVar1 + 0x24,(MethodInfo *)0x0);
                if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                  (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                            (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3275,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3276,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  pSVar9 = System_Xml_XmlDocument__CreateElement(__this_00,pSVar5,(MethodInfo *)0x0)
                  ;
                  (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                            (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3277,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3278,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  pSVar6 = System_Int64__ToString
                                     ((int64_t)&(__this->fields).KDNEJOFPBOP,(MethodInfo *)0x0);
                  if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                    (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                              (pSVar9,pSVar5,pSVar6,(pSVar9->klass->vtable)._66_SetAttribute.method)
                    ;
                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar3,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3279,
                               (MethodInfo *)0x0);
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3280,
                               (MethodInfo *)0x0);
                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    pSVar9 = System_Xml_XmlDocument__CreateElement
                                       (__this_00,pSVar5,(MethodInfo *)0x0);
                    (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                              (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar3,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3281,
                               (MethodInfo *)0x0);
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3282,
                               (MethodInfo *)0x0);
                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    pSVar6 = System_Int64__ToString
                                       ((int64_t)&(__this->fields).FFFDNEMPHIE,(MethodInfo *)0x0);
                    if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                      (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                (pSVar9,pSVar5,pSVar6,
                                 (pSVar9->klass->vtable)._66_SetAttribute.method);
                      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar3,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3283,
                                 (MethodInfo *)0x0);
                      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar4,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3284,
                                 (MethodInfo *)0x0);
                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                      pSVar9 = System_Xml_XmlDocument__CreateElement
                                         (__this_00,pSVar5,(MethodInfo *)0x0);
                      (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar3,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3285,
                                 (MethodInfo *)0x0);
                      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar4,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3286,
                                 (MethodInfo *)0x0);
                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                      pSVar6 = System_Int32__ToString(iVar1 + 0x38,(MethodInfo *)0x0);
                      if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                    /* try { // try from 0345b164 to 0355b167 has its CatchHandler @ 0345b1d8 */
                        (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                  (pSVar9,pSVar5,pSVar6,
                                   (pSVar9->klass->vtable)._66_SetAttribute.method);
                    /* try { // try from 0345b168 to 0355b16b has its CatchHandler @ 0345b1cc */
                    /* try { // try from 0345b16c to 0355b16f has its CatchHandler @ 034592c8 */
                    /* try { // try from 0345b170 to 0355b173 has its CatchHandler @ 0345b1bc */
                        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0345b174 to 0355b177 has its CatchHandler @ 0345b1c4 */
                    /* try { // try from 0345b178 to 0355b17b has its CatchHandler @ 0345b198 */
                    /* try { // try from 0345b17c to 0355b17f has its CatchHandler @ 0345b1bc */
                    /* try { // try from 0345b180 to 0355b18f has its CatchHandler @ 0345b1c4 */
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar3,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3287
                                   ,(MethodInfo *)0x0);
                        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0345a988 with catch @ 0345b190
                       try { // try from 0345b190 to 0355b1f7 has its CatchHandler @ 034592c8 */
                    /* catch() { ... } // from try @ 0345a9a8 with catch @ 0345b194 */
                    /* catch() { ... } // from try @ 0345b178 with catch @ 0345b198 */
                    /* catch() { ... } // from try @ 0345a940 with catch @ 0345b19c */
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar4,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3288
                                   ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345a9c8 with catch @ 0345b1a0 */
                    /* catch() { ... } // from try @ 0345a964 with catch @ 0345b1a4 */
                    /* catch() { ... } // from try @ 0345a9a0 with catch @ 0345b1a8 */
                    /* catch() { ... } // from try @ 0345a97c with catch @ 0345b1ac */
                        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345a8c0 with catch @ 0345b1b0 */
                    /* catch() { ... } // from try @ 0345a870 with catch @ 0345b1b4 */
                    /* catch() { ... } // from try @ 0345a8e8 with catch @ 0345b1b8 */
                    /* catch() { ... } // from try @ 0345b170 with catch @ 0345b1bc
                       catch() { ... } // from try @ 0345b17c with catch @ 0345b1bc */
                        pSVar9 = System_Xml_XmlDocument__CreateElement
                                           (__this_00,pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345aa34 with catch @ 0345b1c0 */
                    /* catch() { ... } // from try @ 0345b174 with catch @ 0345b1c4
                       catch() { ... } // from try @ 0345b180 with catch @ 0345b1c4 */
                    /* catch() { ... } // from try @ 0345a9e8 with catch @ 0345b1c8 */
                    /* catch() { ... } // from try @ 0345b168 with catch @ 0345b1cc */
                    /* catch() { ... } // from try @ 0345b164 with catch @ 0345b1d8 */
                        (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                  (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                    /* catch() { ... } // from try @ 0345a850 with catch @ 0345b1dc */
                    /* catch() { ... } // from try @ 0345a830 with catch @ 0345b1e0 */
                        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar3,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3289
                                   ,(MethodInfo *)0x0);
                    /* try { // try from 0345b1f8 to 0355b1fb has its CatchHandler @ 0345b224 */
                    /* try { // try from 0345b1fc to 0355b233 has its CatchHandler @ 034592c8 */
                        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar4,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3290
                                   ,(MethodInfo *)0x0);
                        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345b1f8 with catch @ 0345b224 */
                        pSVar6 = System_Int64__ToString
                                           ((int64_t)&(__this->fields).JCJODFKPKAE,(MethodInfo *)0x0
                                           );
                    /* try { // try from 0345b234 to 0355b23b has its CatchHandler @ 0345b250 */
                        if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                    /* try { // try from 0345b23c to 0355b247 has its CatchHandler @ 034592c8 */
                    /* try { // try from 0345b248 to 0355b24f has its CatchHandler @ 0345b250 */
                    /* catch() { ... } // from try @ 0345b234 with catch @ 0345b250
                       catch() { ... } // from try @ 0345b248 with catch @ 0345b250 */
                          (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                    (pSVar9,pSVar5,pSVar6,
                                     (pSVar9->klass->vtable)._66_SetAttribute.method);
                          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar3,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3291
                                     ,(MethodInfo *)0x0);
                          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar4,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3292
                                     ,(MethodInfo *)0x0);
                          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                          pSVar9 = System_Xml_XmlDocument__CreateElement
                                             (__this_00,pSVar5,(MethodInfo *)0x0);
                          (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                    (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method);
                          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar3,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3293
                                     ,(MethodInfo *)0x0);
                          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar4,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3294
                                     ,(MethodInfo *)0x0);
                          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                          pSVar6 = System_UInt32__ToString(iVar1 + 0x48,(MethodInfo *)0x0);
                          if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                            (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                      (pSVar9,pSVar5,pSVar6,
                                       (pSVar9->klass->vtable)._66_SetAttribute.method);
                            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar3,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3295
                                       ,(MethodInfo *)0x0);
                            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar4,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3296
                                       ,(MethodInfo *)0x0);
                            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                            pSVar9 = System_Xml_XmlDocument__CreateElement
                                               (__this_00,pSVar5,(MethodInfo *)0x0);
                            (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                      (pSVar8,pSVar9,(pSVar8->klass->vtable)._27_AppendChild.method)
                            ;
                            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar3,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3297
                                       ,(MethodInfo *)0x0);
                            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar4,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3298
                                       ,(MethodInfo *)0x0);
                            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                            pSVar6 = System_Int32__ToString(iVar1 + 0x4c,(MethodInfo *)0x0);
                            if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                              (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                        (pSVar9,pSVar5,pSVar6,
                                         (pSVar9->klass->vtable)._66_SetAttribute.method);
                              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar3,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3299
                                         ,(MethodInfo *)0x0);
                              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar4,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3300
                                         ,(MethodInfo *)0x0);
                              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                              pSVar9 = System_Xml_XmlDocument__CreateElement
                                                 (__this_00,pSVar5,(MethodInfo *)0x0);
                              (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                        (pSVar8,pSVar9,
                                         (pSVar8->klass->vtable)._27_AppendChild.method);
                              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar3,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3301
                                         ,(MethodInfo *)0x0);
                              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar4,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3302
                                         ,(MethodInfo *)0x0);
                              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                              pSVar6 = System_Int32__ToString(iVar1 + 0x50,(MethodInfo *)0x0);
                              if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                                (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                          (pSVar9,pSVar5,pSVar6,
                                           (pSVar9->klass->vtable)._66_SetAttribute.method);
                                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar3,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3303
                                           ,(MethodInfo *)0x0);
                                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar4,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3304
                                           ,(MethodInfo *)0x0);
                                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                                pSVar9 = System_Xml_XmlDocument__CreateElement
                                                   (__this_00,pSVar5,(MethodInfo *)0x0);
                                (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                          (pSVar8,pSVar9,
                                           (pSVar8->klass->vtable)._27_AppendChild.method);
                                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar3,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3305
                                           ,(MethodInfo *)0x0);
                                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          ((System_Array_o *)pSVar4,
                                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3306
                                           ,(MethodInfo *)0x0);
                                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                                pSVar6 = (__this->fields).MOAOBNPKFHF;
                                if ((pSVar6 != (System_String_o *)0x0) &&
                                   (uVar7 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                                                      (pSVar6,(pSVar6->klass->vtable)._3_ToString.
                                                              method),
                                   pSVar9 != (System_Xml_XmlElement_o *)0x0)) {
                                  (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                            (pSVar9,pSVar5,uVar7,
                                             (pSVar9->klass->vtable)._66_SetAttribute.method);
                                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar3,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3307
                                             ,(MethodInfo *)0x0);
                                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar4,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3308
                                             ,(MethodInfo *)0x0);
                                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0)
                                  ;
                                  pSVar9 = System_Xml_XmlDocument__CreateElement
                                                     (__this_00,pSVar5,(MethodInfo *)0x0);
                                  (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                            (pSVar8,pSVar9,
                                             (pSVar8->klass->vtable)._27_AppendChild.method);
                                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar3,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3309
                                             ,(MethodInfo *)0x0);
                                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            ((System_Array_o *)pSVar4,
                                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3310
                                             ,(MethodInfo *)0x0);
                                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0)
                                  ;
                                  pSVar6 = (__this->fields).KDAABAPIIEP;
                                  if ((pSVar6 != (System_String_o *)0x0) &&
                                     (uVar7 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                                                        (pSVar6,(pSVar6->klass->vtable)._3_ToString.
                                                                method),
                                     pSVar9 != (System_Xml_XmlElement_o *)0x0)) {
                                    (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                              (pSVar9,pSVar5,uVar7,
                                               (pSVar9->klass->vtable)._66_SetAttribute.method);
                                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40)
                                    ;
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              ((System_Array_o *)pSVar3,
                                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3311
                                               ,(MethodInfo *)0x0);
                                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40)
                                    ;
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              ((System_Array_o *)pSVar4,
                                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3312
                                               ,(MethodInfo *)0x0);
                                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                       (pSVar3,pSVar4,(MethodInfo *)0x0);
                                    pSVar9 = System_Xml_XmlDocument__CreateElement
                                                       (__this_00,pSVar5,(MethodInfo *)0x0);
                                    (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                              (pSVar8,pSVar9,
                                               (pSVar8->klass->vtable)._27_AppendChild.method);
                                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40)
                                    ;
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              ((System_Array_o *)pSVar3,
                                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3313
                                               ,(MethodInfo *)0x0);
                                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40)
                                    ;
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              ((System_Array_o *)pSVar4,
                                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3314
                                               ,(MethodInfo *)0x0);
                                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                       (pSVar3,pSVar4,(MethodInfo *)0x0);
                                    pSVar6 = System_Int32__ToString(iVar1 + 0x68,(MethodInfo *)0x0);
                                    if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                                      (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                                (pSVar9,pSVar5,pSVar6,
                                                 (pSVar9->klass->vtable)._66_SetAttribute.method);
                                      pSVar3 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar3,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3315
                                                 ,(MethodInfo *)0x0);
                                      pSVar4 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar4,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3316
                                                 ,(MethodInfo *)0x0);
                                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                         (pSVar3,pSVar4,(MethodInfo *)0x0);
                                      pSVar9 = System_Xml_XmlDocument__CreateElement
                                                         (__this_00,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0345b930 to 0355bca3 has its CatchHandler @ 0345b930
                       catch() { ... } // from try @ 0345b930 with catch @ 0345b930
                       catch() { ... } // from try @ 0345bd10 with catch @ 0345b930
                       catch() { ... } // from try @ 0345bdb8 with catch @ 0345b930
                       catch() { ... } // from try @ 0345bdf0 with catch @ 0345b930
                       catch() { ... } // from try @ 0345be30 with catch @ 0345b930 */
                                      (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                                (pSVar8,pSVar9,
                                                 (pSVar8->klass->vtable)._27_AppendChild.method);
                                      pSVar3 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar3,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3317
                                                 ,(MethodInfo *)0x0);
                                      pSVar4 = (System_Byte_array *)
                                               FUN_01bab718(byte___TypeInfo,0x40);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                ((System_Array_o *)pSVar4,
                                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3318
                                                 ,(MethodInfo *)0x0);
                                      pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                         (pSVar3,pSVar4,(MethodInfo *)0x0);
                                      pSVar6 = System_Int64__ToString
                                                         ((int64_t)&(__this->fields).LLMGMJNGKGL,
                                                          (MethodInfo *)0x0);
                                      if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                                        (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                                  (pSVar9,pSVar5,pSVar6,
                                                   (pSVar9->klass->vtable)._66_SetAttribute.method);
                                        pSVar3 = (System_Byte_array *)
                                                 FUN_01bab718(byte___TypeInfo,0x40);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  ((System_Array_o *)pSVar3,
                                                                                                      
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3319
                                                  ,(MethodInfo *)0x0);
                                        pSVar4 = (System_Byte_array *)
                                                 FUN_01bab718(byte___TypeInfo,0x40);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  ((System_Array_o *)pSVar4,
                                                                                                      
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3320
                                                  ,(MethodInfo *)0x0);
                                        pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                           (pSVar3,pSVar4,(MethodInfo *)0x0);
                                        pSVar9 = System_Xml_XmlDocument__CreateElement
                                                           (__this_00,pSVar5,(MethodInfo *)0x0);
                                        (*(pSVar8->klass->vtable)._27_AppendChild.methodPtr)
                                                  (pSVar8,pSVar9,
                                                   (pSVar8->klass->vtable)._27_AppendChild.method);
                                        pSVar3 = (System_Byte_array *)
                                                 FUN_01bab718(byte___TypeInfo,0x40);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  ((System_Array_o *)pSVar3,
                                                                                                      
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3321
                                                  ,(MethodInfo *)0x0);
                                        pSVar4 = (System_Byte_array *)
                                                 FUN_01bab718(byte___TypeInfo,0x40);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  ((System_Array_o *)pSVar4,
                                                                                                      
                                                  Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3322
                                                  ,(MethodInfo *)0x0);
                                        pSVar5 = OMHODMCHILE__NPKGDBHJKCK
                                                           (pSVar3,pSVar4,(MethodInfo *)0x0);
                                        pSVar6 = System_Int64__ToString
                                                           ((int64_t)&(__this->fields).JHPGMIMONIG,
                                                            (MethodInfo *)0x0);
                                        if (pSVar9 != (System_Xml_XmlElement_o *)0x0) {
                                          (*(pSVar9->klass->vtable)._66_SetAttribute.methodPtr)
                                                    (pSVar9,pSVar5,pSVar6,
                                                     (pSVar9->klass->vtable)._66_SetAttribute.method
                                                    );
                                          if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                                            thunk_FUN_01ba7564();
                                          }
                                          pSVar5 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
                                          bVar2 = NEHNBJKKABI__GLNBJGJPBFD(pSVar5,(MethodInfo *)0x0)
                                          ;
                                          pSVar5 = NFNBHPOJFNJ__IOPLIMJLKKE
                                                             ((MethodInfo *)(ulong)bVar2);
                                          GIAMPEGMNHE__LFKDDMKHGEA
                                                    (__this_00,pSVar5,(MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int IPBICIHAHLE()  [RVA 0x335E89C]
// NFNBHPOJFNJ$$IPBICIHAHLE @ RVA 0x335E89C

int32_t NFNBHPOJFNJ__IPBICIHAHLE(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).NLMGIANEGDC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long NNGKDFKKFMG()  [RVA 0x335E8B8]
// NFNBHPOJFNJ$$NNGKDFKKFMG @ RVA 0x335E8B8

int64_t NFNBHPOJFNJ__NNGKDFKKFMG(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).FFFDNEMPHIE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void KJIOMGKHFHB(int CJNHFNHJHPE)  [RVA 0x335E8D4]
// NFNBHPOJFNJ$$KJIOMGKHFHB @ RVA 0x335E8D4

void NFNBHPOJFNJ__KJIOMGKHFHB(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567a60 & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a60 = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).CFPGCJGJGHC = CJNHFNHJHPE;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int AHPLDMGHLPN()  [RVA 0x335E934]
// NFNBHPOJFNJ$$AHPLDMGHLPN @ RVA 0x335E934

int32_t NFNBHPOJFNJ__AHPLDMGHLPN(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).JCNIIJMMLKA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NEALNLJOFMF(bool EGMFHNNGFJL)  [RVA 0x335E950]
// NFNBHPOJFNJ$$NEALNLJOFMF @ RVA 0x335E950

void NFNBHPOJFNJ__NEALNLJOFMF(NFNBHPOJFNJ_o *__this,bool EGMFHNNGFJL,MethodInfo *method)

{
  if (EGMFHNNGFJL) {
    (__this->fields).JIFKMAOOFDI = 1;
    NFNBHPOJFNJ__NCJEFECMBFC(__this,(MethodInfo *)0x1);
    return;
  }
  (__this->fields).JIFKMAOOFDI = 0;
  return;
}


// ===== public void OJNHHOGCKAM(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string PINADELACMD)  [RVA 0x335E968]
// NFNBHPOJFNJ$$OJNHHOGCKAM @ RVA 0x335E968

void NFNBHPOJFNJ__OJNHHOGCKAM
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *PINADELACMD,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *a_01;
  System_Action_o *CPECAEHDDDB;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04567a61 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_IHHNIMJDIHE__);
    FUN_01bab630(&StringLiteral_19983/*"ok"*/);
    FUN_01bab630(&StringLiteral_17601/*"data"*/);
    DAT_04567a61 = 1;
  }
                    /* try { // try from 0345e9d0 to 0355e9f7 has its CatchHandler @ 0345ef40 */
  if (LKFALEIFDIO) {
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345eaec:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0345ea2c to 0355ea57 has its CatchHandler @ 0345ef3c */
      a_00 = (SimpleJSON_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar1 = SimpleJSON_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
        if (plVar2 == (long *)0x0) goto LAB_0345eaec;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* try { // try from 0345ea94 to 0355ea9b has its CatchHandler @ 0345ef38 */
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983/*"ok"*/,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 0345eaa4 to 0355eaab has its CatchHandler @ 0345ef30 */
          CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          method_00 = Method_NFNBHPOJFNJ_IHHNIMJDIHE__;
                    /* try { // try from 0345eab4 to 0355eabb has its CatchHandler @ 0345ef28 */
                    /* try { // try from 0345eac0 to 0355eac7 has its CatchHandler @ 0345ef34 */
          System_Action___ctor();
                    /* try { // try from 0345ead0 to 0355ead7 has its CatchHandler @ 0345ef10 */
                    /* try { // try from 0345ead8 to 0355eaeb has its CatchHandler @ 0345ef0c */
          NFNBHPOJFNJ__NCCONOPIKDD(__this_00,CPECAEHDDDB,method_00);
          return;
        }
      }
    }
  }
  return;
}


// ===== private static string KEDOIFMBKNI()  [RVA 0x335E560]
// NFNBHPOJFNJ$$KEDOIFMBKNI @ RVA 0x335E560

System_String_o * NFNBHPOJFNJ__KEDOIFMBKNI(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567a62 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1521/*"/full_events.json"*/);
    DAT_04567a62 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1521/*"/full_events.json"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string NNCHADEOJPE()  [RVA 0x335EB30]
// NFNBHPOJFNJ$$NNCHADEOJPE @ RVA 0x335EB30

System_String_o * NFNBHPOJFNJ__NNCHADEOJPE(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).KDAABAPIIEP;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int AENIMGGACOK()  [RVA 0x335EB4C]
// NFNBHPOJFNJ$$AENIMGGACOK @ RVA 0x335EB4C

int32_t NFNBHPOJFNJ__AENIMGGACOK(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
                    /* try { // try from 0345eb60 to 0355eb83 has its CatchHandler @ 0345ef08 */
    return (pNVar1->fields).ENJDMHGDMNJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CFPENDINBDI()  [RVA 0x335E2C4]
// NFNBHPOJFNJ$$CFPENDINBDI @ RVA 0x335E2C4

void NFNBHPOJFNJ__CFPENDINBDI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_IO_FileInfo_o *__this_00;
  MethodInfo *method_00;
  System_IO_FileStream_o *pSVar3;
  System_IO_FileInfo_o *__this_01;
  ulong uVar4;
  System_IO_StreamWriter_o *pSVar5;
  System_IO_StreamReader_o *__this_02;
  undefined8 uVar6;
  
  if ((DAT_04567a63 & 1) == 0) {
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    DAT_04567a63 = 1;
  }
  pSVar2 = NFNBHPOJFNJ__KEDOIFMBKNI((MethodInfo *)__this);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)
              (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
  if (((ulong)method_00 & 1) == 0) {
    pSVar3 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
    if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0345e340 to 0355e3c7 has its CatchHandler @ 0345e340
                       catch() { ... } // from try @ 0345e340 with catch @ 0345e340
                       catch() { ... } // from try @ 0345e3dc with catch @ 0345e340
                       catch() { ... } // from try @ 0345e4d4 with catch @ 0345e340
                       catch() { ... } // from try @ 0345e538 with catch @ 0345e340 */
    method_00 = (MethodInfo *)
                (*(pSVar3->klass->vtable)._19_Close.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._19_Close.method);
  }
  pSVar2 = NFNBHPOJFNJ__OMENJAFAEAA(method_00);
  __this_01 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_01,pSVar2,(MethodInfo *)0x0);
  if (__this_01 != (System_IO_FileInfo_o *)0x0) {
    uVar4 = (*(__this_01->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_01,(__this_01->klass->vtable)._10_get_Exists.method);
    if ((uVar4 & 1) != 0) {
      pSVar5 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
      __this_02 = System_IO_FileInfo__OpenText(__this_01,(MethodInfo *)0x0);
      if (__this_02 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      while( true ) {
        bVar1 = System_IO_StreamReader__get_EndOfStream(__this_02,(MethodInfo *)0x0);
        if (bVar1) break;
                    /* try { // try from 0345e3c8 to 0355e3cb has its CatchHandler @ 0345e4a0 */
                    /* try { // try from 0345e3cc to 0355e3db has its CatchHandler @ 0345e4a4 */
        uVar6 = (*(__this_02->klass->vtable)._13_ReadLine.methodPtr)
                          (__this_02,(__this_02->klass->vtable)._13_ReadLine.method);
        if (pSVar5 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(uVar6,uVar6);
        }
                    /* try { // try from 0345e3dc to 0355e4bb has its CatchHandler @ 0345e340 */
        (*(pSVar5->klass->vtable)._19_WriteLine.methodPtr)
                  (pSVar5,uVar6,(pSVar5->klass->vtable)._19_WriteLine.method);
      }
      if (pSVar5 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar5->klass->vtable)._8_Close.methodPtr)(pSVar5,(pSVar5->klass->vtable)._8_Close.method);
      (*(__this_02->klass->vtable)._7_Close.methodPtr)
                (__this_02,(__this_02->klass->vtable)._7_Close.method);
      pSVar3 = System_IO_FileInfo__Create(__this_01,(MethodInfo *)0x0);
      if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar3->klass->vtable)._19_Close.methodPtr)
                (pSVar3,(pSVar3->klass->vtable)._19_Close.method);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIMNIDGFEKN()  [RVA 0x335EBD8]
// NFNBHPOJFNJ$$BIMNIDGFEKN @ RVA 0x335EBD8

/* WARNING: Removing unreachable block (ram,0x0345ee74) */
/* WARNING: Removing unreachable block (ram,0x0345ef00) */

void NFNBHPOJFNJ__BIMNIDGFEKN(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  NFNBHPOJFNJ_o *method_00;
  System_String_o *pSVar5;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  System_Text_StringBuilder_o *__this_00;
  Il2CppMethodPointer *ppIVar7;
  long *plVar8;
  undefined8 *puVar9;
  MethodInfo *method_01;
  System_String_o *FDLJCNLNCOC;
  int64_t iVar10;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  
  method_00 = __this;
  if ((DAT_04567a64 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Skip<string>__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    method_00 = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567a64 = 1;
  }
  pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)method_00);
  bVar3 = NEHNBJKKABI__HALDCNGHJCO(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
  source = System_IO_File__ReadAllLines(pSVar5,(MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    iVar1 = (int)source->max_length;
    if (iVar1 < 0xc9) {
      return;
    }
    pSVar6 = System_Linq_Enumerable__Skip<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,iVar1 + -200,
                        Method_System_Linq_Enumerable_Skip<string>__);
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (pSVar6 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar11 = pSVar6->klass;
      uVar2._0_1_ = (pSVar11->_2).rank;
      uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
                    /* try { // try from 0345ed04 to 0355ed0b has its CatchHandler @ 0345ee98 */
            ppIVar7 = &pSVar11->vtable[*piVar14].methodPtr;
            goto LAB_0345ed0c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      ppIVar7 = (Il2CppMethodPointer *)
                FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_0345ed0c:
      plVar8 = (long *)(**ppIVar7)(pSVar6,(MethodInfo *)ppIVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0345ed7c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0345ed7c:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0345ee68;
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_0345ee40;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0345ee28;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<string>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0345edd8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_0345edd8:
        pSVar5 = (System_String_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0345eef4 to 0355ef07 has its CatchHandler @ 0345f00c */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__AppendLine(__this_00,pSVar5,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto LAB_0345eef8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0345ee28:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0345ee5c;
    }
  }
LAB_0345ee40:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0345ee5c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0345ee68:
                    /* try { // try from 0345ee68 to 0355ee6f has its CatchHandler @ 0345ef44 */
                    /* try { // try from 0345ee70 to 0355ee73 has its CatchHandler @ 0345ef24 */
                    /* try { // try from 0345ee78 to 0355ee7f has its CatchHandler @ 0345ef14 */
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                    /* try { // try from 0345ee80 to 0355ee83 has its CatchHandler @ 0345e6d4 */
                    /* try { // try from 0345ee84 to 0355ee87 has its CatchHandler @ 0345ee90 */
    iVar4 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0345ee88 to 0355eeaf has its CatchHandler @ 0345e6d4 */
                    /* catch() { ... } // from try @ 0345ee84 with catch @ 0345ee90 */
                    /* catch() { ... } // from try @ 0345ed20 with catch @ 0345ee94 */
    System_Text_StringBuilder__set_Length(__this_00,iVar4 + -1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345ed04 with catch @ 0345ee98 */
    pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA(method_01);
    FDLJCNLNCOC = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                    /* try { // try from 0345eeb0 to 0355eeb3 has its CatchHandler @ 0345eee4 */
                    /* try { // try from 0345eeb4 to 0355eef3 has its CatchHandler @ 0345e6d4 */
    NEHNBJKKABI__GPNPELOHJCJ(pSVar5,FDLJCNLNCOC,(MethodInfo *)0x0);
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar10 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
    (__this->fields).BNFLGDFGHBL = iVar10;
                    /* catch() { ... } // from try @ 0345eeb0 with catch @ 0345eee4 */
    return;
  }
LAB_0345eef8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor()  [RVA 0x335EFC8]
// NFNBHPOJFNJ$$.ctor @ RVA 0x335EFC8

void NFNBHPOJFNJ___ctor(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  System_Action_o *CJNHFNHJHPE;
  System_Action_bool__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 0345eff8 to 0355f003 has its CatchHandler @ 0345e6d4 */
                    /* try { // try from 0345f004 to 0355f00b has its CatchHandler @ 0345f00c */
  if ((DAT_04567a65 & 1) == 0) {
                    /* catch() { ... } // from try @ 0345eef4 with catch @ 0345f00c
                       catch() { ... } // from try @ 0345ef88 with catch @ 0345f00c
                       catch() { ... } // from try @ 0345f004 with catch @ 0345f00c */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_BHLHBBKAFHH__);
    FUN_01bab630(&Method_NFNBHPOJFNJ_OONAFIABOCC__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567a65 = 1;
    method = extraout_x1;
  }
  (__this->fields).GBHILJJMGGK = 2;
  (__this->fields).JIFKMAOOFDI = 2;
  pSVar1 = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).DGPKPHAHOJP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).BEDMFFEAEDI;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  NFNBHPOJFNJ__BNDFCFMCCEJ(__this,method_00);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  CJNHFNHJHPE_00 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE_00,(MethodInfo *)0x0);
  NFNBHPOJFNJ__KLNMLOOCAAO(__this,method_01);
  return;
}


// ===== public static NFNBHPOJFNJ MBHIKFMIDAO()  [RVA 0x3359C78]
// NFNBHPOJFNJ$$MBHIKFMIDAO @ RVA 0x3359C78

NFNBHPOJFNJ_o * NFNBHPOJFNJ__MBHIKFMIDAO(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_04567a66 & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a66 = 1;
  }
  pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar1 == (NFNBHPOJFNJ_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pNVar1 = auVar2._0_8_;
    NFNBHPOJFNJ___ctor(pNVar1,auVar2._8_8_);
    NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI = pNVar1;
    thunk_FUN_01c20e04(NFNBHPOJFNJ_TypeInfo->static_fields,pNVar1);
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
  }
  return pNVar1;
}


// ===== public static uint ECNJNDOKLFK()  [RVA 0x335F14C]
// NFNBHPOJFNJ$$ECNJNDOKLFK @ RVA 0x335F14C

uint32_t NFNBHPOJFNJ__ECNJNDOKLFK(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).GJMMEPBMLBM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void KKCJOLHJPHE(string OMEOMLODMAC)  [RVA 0x335DBD0]
// NFNBHPOJFNJ$$KKCJOLHJPHE @ RVA 0x335DBD0

void NFNBHPOJFNJ__KKCJOLHJPHE(System_String_o *OMEOMLODMAC,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar6;
  System_Text_StringBuilder_o *pSVar7;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KMBNFNCDDBP_o *pKVar8;
  System_String_o *value;
  
                    /* catch() { ... } // from try @ 0345db64 with catch @ 0345dbd0
                       catch() { ... } // from try @ 0345db90 with catch @ 0345dbd0 */
                    /* catch() { ... } // from try @ 0345db68 with catch @ 0345dbd4
                       catch() { ... } // from try @ 0345db70 with catch @ 0345dbd4
                       catch() { ... } // from try @ 0345db84 with catch @ 0345dbd4 */
                    /* catch() { ... } // from try @ 0345dad4 with catch @ 0345dbd8 */
  if ((DAT_04567a67 & 1) == 0) {
                    /* try { // try from 0345dbf0 to 0355dbf3 has its CatchHandler @ 0345dc1c */
                    /* try { // try from 0345dbf4 to 0355dc2b has its CatchHandler @ 0345d810 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3323);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3324);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3325);
                    /* catch() { ... } // from try @ 0345dbf0 with catch @ 0345dc1c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3326);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3327);
                    /* try { // try from 0345dc2c to 0355dc33 has its CatchHandler @ 0345dc48 */
                    /* try { // try from 0345dc34 to 0355dc3f has its CatchHandler @ 0345d810 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3328);
                    /* try { // try from 0345dc40 to 0355dc47 has its CatchHandler @ 0345dc48 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3329);
                    /* catch() { ... } // from try @ 0345dc2c with catch @ 0345dc48
                       catch() { ... } // from try @ 0345dc40 with catch @ 0345dc48 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3330);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a67 = 1;
  }
  bVar1 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if ((!bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OMEOMLODMAC,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3323,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3324,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (OMEOMLODMAC != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(OMEOMLODMAC,pSVar5,5,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar8 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar8 != (KMBNFNCDDBP_o *)0x0) {
      value = (pKVar8->fields).AHAKHHLCPAB;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
      MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3325,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3326,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)value,
                   (MethodInfo_2332F24 *)
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3327,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3328,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        method_02 = Method_System_Collections_Generic_Dictionary<string,_object>_Add__;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)OMEOMLODMAC,
                   (MethodInfo_2332F24 *)
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        pNVar6 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
        if ((pNVar6 != (NFNBHPOJFNJ_o *)0x0) &&
           (pSVar7 = (pNVar6->fields).DGPKPHAHOJP, pSVar7 != (System_Text_StringBuilder_o *)0x0)) {
          iVar2 = System_Text_StringBuilder__get_Length(pSVar7,(MethodInfo *)0x0);
          if (iVar2 != 0) {
            pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
            if (pNVar6 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345dfe8;
            pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3329,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3330,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto LAB_0345dfe8;
            System_Text_StringBuilder__Append(pSVar7,pSVar5,(MethodInfo *)0x0);
          }
          pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
          if (pNVar6 != (NFNBHPOJFNJ_o *)0x0) {
            pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
            pSVar5 = ONEDJCACCGM__DLIKOBJAJGD((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
            if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append(pSVar7,pSVar5,(MethodInfo *)0x0);
              bVar1 = ONEDJCACCGM__KDFMBBPEJDE(0xe,(MethodInfo *)0x0);
              if (bVar1) {
                pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
                if (pNVar6 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345dfe8;
                pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
                pNVar6 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
                NFNBHPOJFNJ__GDCHAJOJGBH(pNVar6,pSVar7,(System_String_o *)pNVar6,method_02);
              }
              bVar1 = ONEDJCACCGM__DCIMFCCJPMO(0xe,(MethodInfo *)0x0);
              if (!bVar1) {
                return;
              }
              pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
              if (pNVar6 != (NFNBHPOJFNJ_o *)0x0) {
                NFNBHPOJFNJ__KLNMLOOCAAO(pNVar6,method_01);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0345dfe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDCHAJOJGBH(StringBuilder KOANCCDDBDA, string PCEBDAPOGOO)  [RVA 0x335E5D0]
// NFNBHPOJFNJ$$GDCHAJOJGBH @ RVA 0x335E5D0

void NFNBHPOJFNJ__GDCHAJOJGBH
               (NFNBHPOJFNJ_o *__this,System_Text_StringBuilder_o *KOANCCDDBDA,
               System_String_o *PCEBDAPOGOO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  System_IO_FileInfo_o *__this_00;
  ulong uVar5;
  System_IO_FileStream_o *pSVar6;
  System_IO_StreamWriter_o *pSVar7;
  int64_t iVar8;
  
  if ((DAT_04567a68 & 1) == 0) {
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&StringLiteral_47/*"\n"*/);
                    /* try { // try from 0345e618 to 0355e61f has its CatchHandler @ 0345e670 */
    DAT_04567a68 = 1;
  }
  if (KOANCCDDBDA == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar2 = System_Text_StringBuilder__get_Length(KOANCCDDBDA,(MethodInfo *)0x0);
  if (iVar2 != 0) {
                    /* try { // try from 0345e630 to 0355e63b has its CatchHandler @ 0345e66c */
                    /* try { // try from 0345e63c to 0355e65f has its CatchHandler @ 0345e544 */
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
    bVar1 = System_IO_Directory__Exists(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0345e660 to 0355e663 has its CatchHandler @ 0345e668 */
    if (!bVar1) {
                    /* try { // try from 0345e664 to 0355e687 has its CatchHandler @ 0345e544 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e660 with catch @ 0345e668
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e630 with catch @ 0345e66c
                        */
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345e618 with catch @ 0345e670
                        */
        thunk_FUN_01ba7564();
      }
      pSVar3 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
      NEHNBJKKABI__GLNBJGJPBFD(pSVar3,(MethodInfo *)0x0);
    }
                    /* try { // try from 0345e688 to 0355e68b has its CatchHandler @ 0345e6ac */
                    /* try { // try from 0345e68c to 0355e6b3 has its CatchHandler @ 0345e544 */
    uVar4 = (*(KOANCCDDBDA->klass->vtable)._3_ToString.methodPtr)
                      (KOANCCDDBDA,(KOANCCDDBDA->klass->vtable)._3_ToString.method);
    System_Text_StringBuilder__set_Length(KOANCCDDBDA,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345e688 with catch @ 0345e6ac */
    __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
                    /* try { // try from 0345e6b4 to 0355e6bb has its CatchHandler @ 0345e6d0 */
                    /* try { // try from 0345e6bc to 0355e6c7 has its CatchHandler @ 0345e544 */
    System_IO_FileInfo___ctor(__this_00,PCEBDAPOGOO,(MethodInfo *)0x0);
    if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0345e6c8 to 0355e6cf has its CatchHandler @ 0345e6d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0345e6b4 with catch @ 0345e6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 0345e6c8 with catch @ 0345e6d0
                        */
    uVar5 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
                    /* try { // try from 0345e6d4 to 0355e9cf has its CatchHandler @ 0345e6d4
                       catch() { ... } // from try @ 0345e6d4 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eb84 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ed28 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ee80 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ee88 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eeb4 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345ef08 with catch @ 0345e6d4
                       catch() { ... } // from try @ 0345eff8 with catch @ 0345e6d4 */
    if ((uVar5 & 1) == 0) {
      pSVar6 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
      if (pSVar6 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar6->klass->vtable)._19_Close.methodPtr)
                (pSVar6,(pSVar6->klass->vtable)._19_Close.method);
    }
    pSVar7 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
    uVar5 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
    if (((uVar5 & 1) == 0) ||
       (iVar8 = System_IO_FileInfo__get_Length(__this_00,(MethodInfo *)0x0), iVar8 == 0)) {
      if (pSVar7 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
      if (pSVar7 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar7->klass->vtable)._16_Write.methodPtr)
                (pSVar7,StringLiteral_47/*"\n"*/,(pSVar7->klass->vtable)._16_Write.method);
    }
    (*(pSVar7->klass->vtable)._16_Write.methodPtr)
              (pSVar7,uVar4,(pSVar7->klass->vtable)._16_Write.method);
    (*(pSVar7->klass->vtable)._8_Close.methodPtr)(pSVar7,(pSVar7->klass->vtable)._8_Close.method);
  }
  return;
}


// ===== public static long LBFHJMKGOBE()  [RVA 0x335F168]
// NFNBHPOJFNJ$$LBFHJMKGOBE @ RVA 0x335F168

int64_t NFNBHPOJFNJ__LBFHJMKGOBE(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).KDNEJOFPBOP;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string PIGEMGJCMKM()  [RVA 0x335F184]
// NFNBHPOJFNJ$$PIGEMGJCMKM @ RVA 0x335F184

System_String_o * NFNBHPOJFNJ__PIGEMGJCMKM(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).MOAOBNPKFHF;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int PLLCCDLFEHA()  [RVA 0x335F1A0]
// NFNBHPOJFNJ$$PLLCCDLFEHA @ RVA 0x335F1A0

int32_t NFNBHPOJFNJ__PLLCCDLFEHA(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    return (pNVar1->fields).PALMKKDPJAB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCCONOPIKDD(Action CPECAEHDDDB)  [RVA 0x335EAF0]
// NFNBHPOJFNJ$$NCCONOPIKDD @ RVA 0x335EAF0

void NFNBHPOJFNJ__NCCONOPIKDD(NFNBHPOJFNJ_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  NFNBHPOJFNJ_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  
                    /* try { // try from 0345eaf0 to 0355eafb has its CatchHandler @ 0345ef1c */
                    /* try { // try from 0345eafc to 0355eb07 has its CatchHandler @ 0345ef20 */
  __this_00 = (NFNBHPOJFNJ_o *)Core_Network_ServerProvider__get_Instance((MethodInfo *)0x0);
  routine = NFNBHPOJFNJ__LMIKJOOBAPI(__this_00,CPECAEHDDDB,method);
                    /* try { // try from 0345eb10 to 0355eb17 has its CatchHandler @ 0345ef2c */
  if (__this_00 != (NFNBHPOJFNJ_o *)0x0) {
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EKACCJMPGIH(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string BLKCDEOHIDK)  [RVA 0x335F1BC]
// NFNBHPOJFNJ$$EKACCJMPGIH @ RVA 0x335F1BC

void NFNBHPOJFNJ__EKACCJMPGIH
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *BLKCDEOHIDK,MethodInfo *method)

{
  NFNBHPOJFNJ__ALHPEKDJCOJ(__this,LKFALEIFDIO,OCMMDIHLKMH,EHPEBANNEAC,BLKCDEOHIDK,method);
  return;
}


// ===== private void CGMCAEFAILP(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string BLKCDEOHIDK)  [RVA 0x335F1C4]
// NFNBHPOJFNJ$$CGMCAEFAILP @ RVA 0x335F1C4

void NFNBHPOJFNJ__CGMCAEFAILP
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *BLKCDEOHIDK,MethodInfo *method)

{
  NFNBHPOJFNJ__OJNHHOGCKAM(__this,LKFALEIFDIO,OCMMDIHLKMH,EHPEBANNEAC,BLKCDEOHIDK,method);
  return;
}


// ===== public void FDMLGJJBJCJ(bool EGMFHNNGFJL)  [RVA 0x335F1CC]
// NFNBHPOJFNJ$$FDMLGJJBJCJ @ RVA 0x335F1CC

void NFNBHPOJFNJ__FDMLGJJBJCJ(NFNBHPOJFNJ_o *__this,bool EGMFHNNGFJL,MethodInfo *method)

{
  if (EGMFHNNGFJL) {
    (__this->fields).GBHILJJMGGK = 1;
    NFNBHPOJFNJ__KLNMLOOCAAO(__this,(MethodInfo *)0x1);
    return;
  }
  (__this->fields).GBHILJJMGGK = 0;
  return;
}


// ===== private void CLLEOJDJOMK(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string BLKCDEOHIDK)  [RVA 0x335F1E4]
// NFNBHPOJFNJ$$CLLEOJDJOMK @ RVA 0x335F1E4

void NFNBHPOJFNJ__CLLEOJDJOMK
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *BLKCDEOHIDK,MethodInfo *method)

{
  NFNBHPOJFNJ__JGMKDPHEEIK(__this,LKFALEIFDIO,OCMMDIHLKMH,EHPEBANNEAC,BLKCDEOHIDK,method);
  return;
}


// ===== private void EAOLEKCDMCM()  [RVA 0x335C08C]
// NFNBHPOJFNJ$$EAOLEKCDMCM @ RVA 0x335C08C

void NFNBHPOJFNJ__EAOLEKCDMCM(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  System_String_o *fileName;
  System_IO_FileInfo_o *__this_00;
  ulong uVar2;
  System_IO_StreamReader_o *pSVar3;
  long *plVar4;
  long lVar5;
  System_Action_o *CPECAEHDDDB;
  NFNBHPOJFNJ_o *__this_01;
  System_IO_FileStream_o *pSVar6;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  long lVar7;
  
  pNVar1 = __this;
  if ((DAT_04567a69 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    pNVar1 = (NFNBHPOJFNJ_o *)FUN_01bab630(&Method_NFNBHPOJFNJ_KLNMLOOCAAO__);
    DAT_04567a69 = 1;
  }
  KOANCCDDBDA = (__this->fields).DGPKPHAHOJP;
  pNVar1 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)pNVar1);
  NFNBHPOJFNJ__GDCHAJOJGBH(pNVar1,KOANCCDDBDA,(System_String_o *)pNVar1,in_x3);
  fileName = NFNBHPOJFNJ__OMENJAFAEAA(method_00);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_00,fileName,(MethodInfo *)0x0);
  if (__this_00 != (System_IO_FileInfo_o *)0x0) {
    uVar2 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pSVar3 = System_IO_FileInfo__OpenText(__this_00,(MethodInfo *)0x0);
    if (pSVar3 != (System_IO_StreamReader_o *)0x0) {
      lVar7 = (__this->fields).LLMGMJNGKGL;
      plVar4 = (long *)(*(pSVar3->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
        (*(pSVar3->klass->vtable)._7_Close.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._7_Close.method);
        if (lVar7 < lVar5) {
          CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          method_02 = Method_NFNBHPOJFNJ_KLNMLOOCAAO__;
          System_Action___ctor();
          NFNBHPOJFNJ__NCCONOPIKDD(__this_01,CPECAEHDDDB,method_02);
          return;
        }
        pSVar6 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
        if (pSVar6 != (System_IO_FileStream_o *)0x0) {
          (*(pSVar6->klass->vtable)._19_Close.methodPtr)
                    (pSVar6,(pSVar6->klass->vtable)._19_Close.method);
          (__this->fields).LLMGMJNGKGL = 0;
          NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDCHAJOJGBH()  [RVA 0x3359CFC]
// NFNBHPOJFNJ$$GDCHAJOJGBH @ RVA 0x3359CFC

void NFNBHPOJFNJ__GDCHAJOJGBH(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *in_x3;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  
  KOANCCDDBDA = (__this->fields).DGPKPHAHOJP;
  __this_00 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)__this);
  NFNBHPOJFNJ__GDCHAJOJGBH(__this_00,KOANCCDDBDA,(System_String_o *)__this_00,in_x3);
  return;
}


// ===== private void BGILDFBAMNI()  [RVA 0x335F37C]
// NFNBHPOJFNJ$$BGILDFBAMNI @ RVA 0x335F37C

void NFNBHPOJFNJ__BGILDFBAMNI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  System_String_o *fileName;
  System_IO_FileInfo_o *__this_00;
  ulong uVar2;
  System_IO_StreamReader_o *pSVar3;
  long *plVar4;
  long lVar5;
  System_IO_FileStream_o *pSVar6;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  long lVar7;
  
  pNVar1 = __this;
  if ((DAT_04567a6a & 1) == 0) {
    pNVar1 = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    DAT_04567a6a = 1;
  }
  KOANCCDDBDA = (__this->fields).BEDMFFEAEDI;
  pNVar1 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)pNVar1);
  NFNBHPOJFNJ__GDCHAJOJGBH(pNVar1,KOANCCDDBDA,(System_String_o *)pNVar1,in_x3);
  fileName = NFNBHPOJFNJ__JOECBAFGPOA(method_00);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_00,fileName,(MethodInfo *)0x0);
  if (__this_00 != (System_IO_FileInfo_o *)0x0) {
    uVar2 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
    if ((uVar2 & 1) == 0) {
      return;
    }
    pSVar3 = System_IO_FileInfo__OpenText(__this_00,(MethodInfo *)0x0);
    if (pSVar3 != (System_IO_StreamReader_o *)0x0) {
      lVar7 = (__this->fields).JHPGMIMONIG;
      plVar4 = (long *)(*(pSVar3->klass->vtable)._15_get_BaseStream.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._15_get_BaseStream.method);
      if (plVar4 != (long *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
        (*(pSVar3->klass->vtable)._7_Close.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._7_Close.method);
        if (lVar7 < lVar5) {
          return;
        }
        pSVar6 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
        if (pSVar6 != (System_IO_FileStream_o *)0x0) {
          (*(pSVar6->klass->vtable)._19_Close.methodPtr)
                    (pSVar6,(pSVar6->klass->vtable)._19_Close.method);
          (__this->fields).JHPGMIMONIG = 0;
          NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string OMENJAFAEAA()  [RVA 0x335EB68]
// NFNBHPOJFNJ$$OMENJAFAEAA @ RVA 0x335EB68

System_String_o * NFNBHPOJFNJ__OMENJAFAEAA(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567a6b & 1) == 0) {
                    /* try { // try from 0345eb84 to 0355ed03 has its CatchHandler @ 0345e6d4 */
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1519/*"/events.json"*/);
    DAT_04567a6b = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1519/*"/events.json"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void BCLJHLMANLP(int CJNHFNHJHPE)  [RVA 0x335F4A4]
// NFNBHPOJFNJ$$BCLJHLMANLP @ RVA 0x335F4A4

void NFNBHPOJFNJ__BCLJHLMANLP(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567a6c & 1) == 0) {
    method_00 = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a6c = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).ENJDMHGDMNJ = CJNHFNHJHPE;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string IOPLIMJLKKE()  [RVA 0x335DA34]
// NFNBHPOJFNJ$$IOPLIMJLKKE @ RVA 0x335DA34

System_String_o * NFNBHPOJFNJ__IOPLIMJLKKE(MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 0345da44 to 0355da4b has its CatchHandler @ 0345dbac */
  if ((DAT_04567a6d & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1520/*"/events_data.xml"*/);
                    /* try { // try from 0345da68 to 0355da8b has its CatchHandler @ 0345dbc8 */
    DAT_04567a6d = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
                    /* try { // try from 0345da9c to 0355dac3 has its CatchHandler @ 0345dbc4 */
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1520/*"/events_data.xml"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static int FKKODNPKIIG()  [RVA 0x335F504]
// NFNBHPOJFNJ$$FKKODNPKIIG @ RVA 0x335F504

int32_t NFNBHPOJFNJ__FKKODNPKIIG(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567a6e & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a6e = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).BHDIODFMGPD = (pNVar1->fields).BHDIODFMGPD + 1;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_00);
      pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
        return (pNVar1->fields).BHDIODFMGPD;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JGMKDPHEEIK(bool LKFALEIFDIO, string OCMMDIHLKMH, object EHPEBANNEAC, string PINADELACMD)  [RVA 0x335F1EC]
// NFNBHPOJFNJ$$JGMKDPHEEIK @ RVA 0x335F1EC

void NFNBHPOJFNJ__JGMKDPHEEIK
               (NFNBHPOJFNJ_o *__this,bool LKFALEIFDIO,System_String_o *OCMMDIHLKMH,
               Il2CppObject *EHPEBANNEAC,System_String_o *PINADELACMD,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONNode_o *a_00;
  long *plVar2;
  System_String_o *a_01;
  System_Action_o *CPECAEHDDDB;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04567a6f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_NCJEFECMBFC__);
    FUN_01bab630(&StringLiteral_19983/*"ok"*/);
    FUN_01bab630(&StringLiteral_17601/*"data"*/);
    DAT_04567a6f = 1;
  }
  if (LKFALEIFDIO) {
    a = SimpleJSON_JSON__Parse(OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0345f378:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      a_00 = (SimpleJSON_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      bVar1 = SimpleJSON_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,StringLiteral_17601/*"data"*/,(a->klass->vtable)._7_get_Item.method);
        if (plVar2 == (long *)0x0) goto LAB_0345f378;
        a_01 = (System_String_o *)
               (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        bVar1 = System_String__op_Equality(a_01,StringLiteral_19983/*"ok"*/,(MethodInfo *)0x0);
        if (bVar1) {
          NFNBHPOJFNJ__BGILDFBAMNI(__this,method_00);
          CPECAEHDDDB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          method_01 = Method_NFNBHPOJFNJ_NCJEFECMBFC__;
          System_Action___ctor();
          NFNBHPOJFNJ__NCCONOPIKDD(__this_00,CPECAEHDDDB,method_01);
          return;
        }
      }
    }
  }
  return;
}


// ===== public void OONAFIABOCC(bool KDNHFKPLJIC)  [RVA 0x335F578]
// NFNBHPOJFNJ$$OONAFIABOCC @ RVA 0x335F578

void NFNBHPOJFNJ__OONAFIABOCC(NFNBHPOJFNJ_o *__this,bool KDNHFKPLJIC,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)(ulong)KDNHFKPLJIC;
  if ((DAT_04567a70 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04567a70 = 1;
    method_00 = extraout_x1;
  }
  if (KDNHFKPLJIC) {
    NFNBHPOJFNJ__CAILMLFMDBI(__this,method_00);
    return;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  if (iVar1 - (__this->fields).BNFLGDFGHBL < 0xdbba1) {
    return;
  }
  NFNBHPOJFNJ__KLNMLOOCAAO(__this,method_01);
  return;
}


// ===== private void KLNMLOOCAAO()  [RVA 0x3359D18]
// NFNBHPOJFNJ$$KLNMLOOCAAO @ RVA 0x3359D18

void NFNBHPOJFNJ__KLNMLOOCAAO(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *__this_00;
  MethodInfo *method_01;
  System_String_o *DNOPBOLEJBC;
  System_Action_bool__string__object__string__o *GFNABKGEGJA;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  MethodInfo *in_x7;
  System_Text_StringBuilder_o *KOANCCDDBDA;
  
  if ((DAT_04567a71 & 1) == 0) {
    FUN_01bab630(&System_Action<bool,_string,_object,_string>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_NFNBHPOJFNJ_EKACCJMPGIH__);
    FUN_01bab630(&StringLiteral_20665/*"save_json_log"*/);
    DAT_04567a71 = 1;
    method = extraout_x1;
  }
  if (((__this->fields).GBHILJJMGGK | 2U) == 2) {
    return;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  method_00 = (MethodInfo *)Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  KOANCCDDBDA = (__this->fields).DGPKPHAHOJP;
  (__this->fields).BNFLGDFGHBL = (int64_t)method_00;
  __this_00 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA(method_00);
  NFNBHPOJFNJ__GDCHAJOJGBH(__this_00,KOANCCDDBDA,(System_String_o *)__this_00,in_x3);
  DNOPBOLEJBC = NFNBHPOJFNJ__OMENJAFAEAA(method_01);
  GFNABKGEGJA = (System_Action_bool__string__object__string__o *)
                thunk_FUN_01bda818(System_Action<bool,_string,_object,_string>_TypeInfo);
  System_Action<bool,_object,_object,_object>___ctor();
  NFNBHPOJFNJ__KLNMLOOCAAO
            (__this,DNOPBOLEJBC,&(__this->fields).LLMGMJNGKGL,GFNABKGEGJA,2000000,true,
             StringLiteral_20665/*"save_json_log"*/,in_x7);
  return;
}


// ===== private void CAILMLFMDBI()  [RVA 0x335F614]
// NFNBHPOJFNJ$$CAILMLFMDBI @ RVA 0x335F614

void NFNBHPOJFNJ__CAILMLFMDBI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint32_t uVar2;
  int64_t iVar3;
  Roster_o *pAVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567a72 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567a72 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  iVar3 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
  (__this->fields).FFFDNEMPHIE = iVar3;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar4 != (Roster_o *)0x0) {
      iVar3 = Roster__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
      (__this->fields).KDNEJOFPBOP = iVar3;
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 != (Roster_o *)0x0) {
        iVar1 = Roster__EOEAKGGDBFH(pAVar4,(MethodInfo *)0x0);
        (__this->fields).JCNIIJMMLKA = iVar1;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (Roster_o *)0x0) {
          iVar3 = Roster__IMLCNMCBEEN(pAVar4,(MethodInfo *)0x0);
          (__this->fields).JCJODFKPKAE = iVar3;
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar4 != (Roster_o *)0x0) {
            uVar2 = Roster__LFOIBFFCBCL(pAVar4,(MethodInfo *)0x0);
            (__this->fields).GJMMEPBMLBM = uVar2;
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar4 != (Roster_o *)0x0) {
              iVar1 = Roster__FMNEFEMHCGG(pAVar4,(MethodInfo *)0x0);
              (__this->fields).BPPLJOIMODJ = iVar1;
              goto LAB_0345f854;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0345f854:
  (__this->fields).MOAOBNPKFHF = StringLiteral_1567/*"0"*/;
  thunk_FUN_01c20e04();
  (__this->fields).KDAABAPIIEP = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ADFEICBKGCN = 0;
  NFNBHPOJFNJ__KIBAKBEOOJI(__this,method_00);
  return;
}


// ===== public static int MNLKJHBKMPB()  [RVA 0x335F89C]
// NFNBHPOJFNJ$$MNLKJHBKMPB @ RVA 0x335F89C

int32_t NFNBHPOJFNJ__MNLKJHBKMPB(MethodInfo *method)

{
  NFNBHPOJFNJ_o *pNVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567a73 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a73 = 1;
  }
  pNVar1 = NFNBHPOJFNJ__MBHIKFMIDAO(method);
  if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
    (pNVar1->fields).ONEHIOEMIHA = (pNVar1->fields).ONEHIOEMIHA + 1;
    pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
      NFNBHPOJFNJ__KIBAKBEOOJI(pNVar1,method_00);
      pNVar1 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar1 != (NFNBHPOJFNJ_o *)0x0) {
        return (pNVar1->fields).ONEHIOEMIHA;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CKHDCCFGNEN()  [RVA 0x335DAA4]
// NFNBHPOJFNJ$$CKHDCCFGNEN @ RVA 0x335DAA4

void NFNBHPOJFNJ__CKHDCCFGNEN(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04567a74 & 1) == 0) {
                    /* try { // try from 0345dad4 to 0355db1b has its CatchHandler @ 0345dbd8 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567a74 = 1;
  }
  (__this->fields).JCJODFKPKAE = 0;
  (__this->fields).GJMMEPBMLBM = 0;
  (__this->fields).BPPLJOIMODJ = 0;
  *(undefined8 *)((long)&(__this->fields).FFFDNEMPHIE + 4) = 0;
  *(undefined8 *)((long)&(__this->fields).KDNEJOFPBOP + 4) = 0;
  (__this->fields).EBLLKDIIEBI = 0;
  (__this->fields).CFPGCJGJGHC = 0;
  (__this->fields).BHDIODFMGPD = 0;
  (__this->fields).ONEHIOEMIHA = 0;
  (__this->fields).KDNEJOFPBOP = 0;
  (__this->fields).PALMKKDPJAB = 0;
  (__this->fields).ENJDMHGDMNJ = 0;
  (__this->fields).NLMGIANEGDC = 0;
  (__this->fields).MOAOBNPKFHF = StringLiteral_1567/*"0"*/;
  thunk_FUN_01c20e04();
  ppSVar1 = &(__this->fields).KDAABAPIIEP;
  *ppSVar1 = StringLiteral_1/*""*/;
                    /* try { // try from 0345db20 to 0355db2b has its CatchHandler @ 0345dba0 */
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).ADFEICBKGCN = 0;
                    /* try { // try from 0345db2c to 0355db63 has its CatchHandler @ 0345d810 */
  return;
}


// ===== public static void KCBJCLNBGAO(string OMEOMLODMAC)  [RVA 0x335F910]
// NFNBHPOJFNJ$$KCBJCLNBGAO @ RVA 0x335F910

void NFNBHPOJFNJ__KCBJCLNBGAO(System_String_o *OMEOMLODMAC,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *method_00;
  NFNBHPOJFNJ_o *pNVar6;
  System_Text_StringBuilder_o *pSVar7;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KMBNFNCDDBP_o *pKVar8;
  System_String_o *value;
  
  if ((DAT_04567a67 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3323);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3324);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3325);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3326);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3327);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3328);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3329);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3330);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    DAT_04567a67 = 1;
  }
  bVar1 = IEICNBBBNEJ__KDAGDFGJGKN(true,(MethodInfo *)0x0);
  if ((!bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OMEOMLODMAC,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3323,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3324,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (OMEOMLODMAC != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(OMEOMLODMAC,pSVar5,5,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar8 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar8 != (KMBNFNCDDBP_o *)0x0) {
      value = (pKVar8->fields).AHAKHHLCPAB;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
      MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3325,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3326,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)value,
                   (MethodInfo_2332F24 *)
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3327,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3328,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        method_02 = Method_System_Collections_Generic_Dictionary<string,_object>_Add__;
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this,(Il2CppObject *)pSVar5,(Il2CppObject *)OMEOMLODMAC,
                   (MethodInfo_2332F24 *)
                   Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
        pNVar6 = NFNBHPOJFNJ__MBHIKFMIDAO(method_00);
        if ((pNVar6 != (NFNBHPOJFNJ_o *)0x0) &&
           (pSVar7 = (pNVar6->fields).DGPKPHAHOJP, pSVar7 != (System_Text_StringBuilder_o *)0x0)) {
          iVar2 = System_Text_StringBuilder__get_Length(pSVar7,(MethodInfo *)0x0);
          if (iVar2 != 0) {
            pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
            if (pNVar6 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345dfe8;
            pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3329,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3330,
                       (MethodInfo *)0x0);
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
            if (pSVar7 == (System_Text_StringBuilder_o *)0x0) goto LAB_0345dfe8;
            System_Text_StringBuilder__Append(pSVar7,pSVar5,(MethodInfo *)0x0);
          }
          pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
          if (pNVar6 != (NFNBHPOJFNJ_o *)0x0) {
            pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
            pSVar5 = ONEDJCACCGM__DLIKOBJAJGD((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
            if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append(pSVar7,pSVar5,(MethodInfo *)0x0);
              bVar1 = ONEDJCACCGM__KDFMBBPEJDE(0xe,(MethodInfo *)0x0);
              if (bVar1) {
                pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
                if (pNVar6 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345dfe8;
                pSVar7 = (pNVar6->fields).DGPKPHAHOJP;
                pNVar6 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
                NFNBHPOJFNJ__GDCHAJOJGBH(pNVar6,pSVar7,(System_String_o *)pNVar6,method_02);
              }
              bVar1 = ONEDJCACCGM__DCIMFCCJPMO(0xe,(MethodInfo *)0x0);
              if (!bVar1) {
                return;
              }
              pNVar6 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
              if (pNVar6 != (NFNBHPOJFNJ_o *)0x0) {
                NFNBHPOJFNJ__KLNMLOOCAAO(pNVar6,method_01);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0345dfe8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

