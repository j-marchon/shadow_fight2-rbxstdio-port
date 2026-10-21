// Nekki.SF2.GUI.LabelAlias$$set_ToUpperCase @ RVA 0x31AE954

void Nekki_SF2_GUI_LabelAlias__set_ToUpperCase
               (Nekki_SF2_GUI_LabelAlias_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((bool)*(char *)&(__this->fields)._Alias != CJNHFNHJHPE) {
                    /* try { // try from 032ae970 to 033ae977 has its CatchHandler @ 032aeab0 */
    *(bool *)&(__this->fields)._Alias = CJNHFNHJHPE;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (*(System_String_o **)&(__this->fields)._useLabelLineSpacing,(MethodInfo *)0x0
                      );
                    /* try { // try from 032ae97c to 033ae983 has its CatchHandler @ 032aeab4 */
    if (!bVar1) {
      Nekki_SF2_GUI_LabelAlias__GBPDDFOIDPG(__this,method_00);
      return;
    }
  }
  return;
}

