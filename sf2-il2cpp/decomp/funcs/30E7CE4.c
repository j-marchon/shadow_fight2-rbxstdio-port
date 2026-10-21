// HOOAAGABMBL$$IMDKJNJBKLB @ RVA 0x30E7CE4

System_String_o * HOOAAGABMBL__IMDKJNJBKLB(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  GLDKIFOLMAO_o *pGVar3;
  System_String_o **ppSVar4;
  
  lVar2 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  if (lVar2 != 0) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*(System_String_o **)(lVar2 + 0x20),(MethodInfo *)0x0);
    ppSVar4 = (System_String_o **)(lVar2 + 0x20);
    if (!bVar1) goto LAB_031e7d2c;
  }
  pGVar3 = (__this->fields).FEAKLAKEMBE;
  ppSVar4 = &(__this->fields).KPKHGGOBOJG;
  if (pGVar3 != (GLDKIFOLMAO_o *)0x0) {
    ppSVar4 = &(pGVar3->fields)._OFGNPIPABAC_k__BackingField;
  }
LAB_031e7d2c:
  return *ppSVar4;
}

