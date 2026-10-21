// Nekki.SF2.GUI.Dialogs.SimpleDialog$$Init @ RVA 0x301E1EC

void Nekki_SF2_GUI_Dialogs_SimpleDialog__Init
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *GKLEODLEPMA;
  int32_t DNBBBGEENMM;
  System_String_o **ppSVar2;
  
  if ((DAT_04565c2e & 1) == 0) {
    FUN_01bab630(&LKEEMMPKJKK_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c2e = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (LKEEMMPKJKK_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)LKEEMMPKJKK_TypeInfo)) {
      (__this->fields).super.NIEHEOKFPAN = (System_String_o *)IMMNELPBGIF[3].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.FKKACPDDADI = *(int32_t *)((long)&IMMNELPBGIF[4].monitor + 4);
      (__this->fields).super.AHHAONPHEPD = *(bool_conflict *)&IMMNELPBGIF[3].monitor;
      (__this->fields).super.LLBBHINDIDB = (System_String_o *)IMMNELPBGIF[4].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.FHLAKGNIFAF = *(int32_t *)&IMMNELPBGIF[5].klass;
      (__this->fields).super.KJLEAJNIFPA = *(bool_conflict *)&IMMNELPBGIF[4].monitor;
      (__this->fields).DNPHBCPFMPB = (System_Action_object__o *)IMMNELPBGIF[6].klass;
      thunk_FUN_01c20e04();
      (__this->fields).DHHJFNPJFLF = (System_String_o *)IMMNELPBGIF[2].klass;
      thunk_FUN_01c20e04();
      (__this->fields).ENHHJMDENNI = *(bool_conflict *)&IMMNELPBGIF[2].monitor;
      (__this->fields)._ANLOMDKGOND_k__BackingField =
           *(bool_conflict *)((long)&IMMNELPBGIF[5].klass + 4);
      (__this->fields).PKGLLMLHGPC = *(bool_conflict *)((long)&IMMNELPBGIF[5].klass + 5);
      ppSVar2 = &(__this->fields).JKBAACEKGJF;
      *ppSVar2 = IMMNELPBGIF[5].monitor;
      thunk_FUN_01c20e04(ppSVar2);
      GKLEODLEPMA = IMMNELPBGIF[1].klass;
      (__this->fields).super.FCBFEJDLODF = *(bool_conflict *)&IMMNELPBGIF[1].monitor;
      DNBBBGEENMM = *(int32_t *)((long)&IMMNELPBGIF[2].monitor + 4);
      goto LAB_0311e274;
    }
  }
  DNBBBGEENMM = 0;
  GKLEODLEPMA = StringLiteral_1;
LAB_0311e274:
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(System_String_o *)GKLEODLEPMA,
             (__this->fields).super.NIEHEOKFPAN,(__this->fields).super.LLBBHINDIDB,DNBBBGEENMM,
             (MethodInfo *)0x0);
  return;
}

