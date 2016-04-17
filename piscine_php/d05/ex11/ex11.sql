SELECT upper(fiche_personne.nom) as 'NOM', fiche_personne.prenom, abonnement.prix FROM membre JOIN abonnement ON abonnement.id_abo = membre.id_abo JOIN fiche_personne ON fiche_personne.id_perso = membre.id_fiche_perso WHERE abonnement.prix > 42 ORDER BY fiche_personne.nom, fiche_personne.prenom;
